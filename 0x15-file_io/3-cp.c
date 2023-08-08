#include "main.h"

/**
 * check - Checks operation
 *
 * @res: Result of the operation
 * @buf: Name of file
 * @f_from: File descriptor of file_from
 * @f_to: File descriptor of file_to
 * @msg: Message to be printed if error
 * @value: Value of the file descriptor
 * @n: Exit number
 *
 * Return: void
 */
void check(ssize_t res, char *buf, int f_from, int f_to, char *msg,
		int value, int n)
{
	if (res == -1)
	{
		if (value != -1)
			dprintf(STDERR_FILENO, "%s %d\n", msg,
					value);
		else if (buf != NULL)
			dprintf(STDERR_FILENO, "%s %s\n", msg,
					buf);
		else
			dprintf(STDERR_FILENO, "%s\n", msg);
		if (f_from != -1)
			close(f_from);
		if (f_to != -1)
			close(f_to);
		exit(n);
	}
}

/**
 * main - Entry point
 * @ac: Arguments count
 * @av: Arguments
 *
 * Return:
 * -- if the number of argument is not the correct one, exit with
 * code 97 and print
 * Usage: cp file_from file_to, followed by a new line, on the POSIX
 * standard error
 * -- if file_from does not exist, or if you can not read it, exit
 * with code 98 and print Error: Can't read from file NAME_OF_THE_FILE,
 * followed by a new line, on the POSIX standard error; where
 * NAME_OF_THE_FILE is the first argument passed to your program
 * -- if you can not create or if write to file_to fails, exit with
 * code 99 and print Error: Can't write to NAME_OF_THE_FILE, followed
 * by a new line, on the POSIX standard error; where NAME_OF_THE_FILE
 * is the second argument passed to your program
 * -- if you can not close a file descriptor , exit with code 100 and
 * print Error: Can't close fd FD_VALUE, followed by a new line, on the
 * POSIX standard error; where FD_VALUE is the value of the file
 * descriptor
 *
 * Description: if file_to already exists, truncate it; Permissions of
 * the created file: rw-rw-r--.
 * If the file already exists, do not change the permissions
 */
int main(int ac, char **av)
{
	char *err98 = "Error: Can't read from file";
	char *err99 = "Error: Can't write to";
	char *err100 = "Error: Can't close fd";
	ssize_t len_read, len_write;
	int from_op, to_op, file_to_close, file_from_close;
	char *file_from = av[1], *file_to = av[2], buffer[1024];
	mode_t file_access_perm;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_op = open(file_from, O_RDONLY);
	check((ssize_t) from_op, file_from, -1, -1, err98, -1, 98);
	file_access_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	to_op = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, file_access_perm);
	check((ssize_t) to_op, file_to, from_op, -1, err99, -1, 99);

	len_read = 1024;
	while (len_read == 1024)
	{
		len_read = read(from_op, buffer, 1024);
		check((ssize_t) len_read, file_from, from_op, to_op,
				err98, -1, 98);
		len_write = write(to_op, buffer, len_read);
		if (len_write != len_read)
			len_write = -1;
		check((ssize_t) len_write, file_to, from_op, to_op,
				err99, -1, 99);
	}
	file_to_close = close(to_op);
	check((ssize_t) file_to_close, NULL, -1, -1, err100, to_op,
			100);
	file_from_close = close(from_op);
	check((ssize_t) file_from_close, NULL, -1, -1, err100, from_op,
			100);

	return (0);
}
