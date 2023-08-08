#include "main.h"

/**
 * main - Entry point
 * @ac: Arguments count
 * @av: Arguments
 *
 * Return:
 * -- if the number of argument is not the correct one, exit with code 97 and print
 * Usage: cp file_from file_to, followed by a new line, on the POSIX standard error
 * -- if file_from does not exist, or if you can not read it, exit with code 98 and
 * print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line, on
 * the POSIX standard error; where NAME_OF_THE_FILE is the first argument passed to
 * your program
 * -- if you can not create or if write to file_to fails, exit with code 99 and print
 * Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX
 * standard error; where NAME_OF_THE_FILE is the second argument passed to your
 * program
 * -- if you can not close a file descriptor , exit with code 100 and print
 * Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error;
 * where FD_VALUE is the value of the file descriptor
 *
 * Description: if file_to already exists, truncate it; Permissions of the created
 * file: rw-rw-r--. If the file already exists, do not change the permissions
 */
int main(int ac, char **av)
{
	char *file_from = av[1], *file_to = av[2], buffer[1024];
	ssize_t len_read, len_write;
	int from_op, to_op, file_to_close, file_from_close;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_op = open(file_from, O_RDONLY);
	if (from_op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	to_op = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (to_op == -1)
	{
		close(from_op);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	len_read = 1024;
	while (len_read == 1024)
	{
		len_read = read(from_op, buffer, 1024);
		if (len_read == -1)
		{
			close(from_op), close(to_op);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		len_write = write(to_op, buffer, len_read);
		if (len_write == -1 || len_write != len_read)
		{
			close(from_op), close(to_op);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	file_to_close = close(to_op);
	file_from_close = close(from_op);
	if (file_to_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", to_op);
		exit(100);
	}
	if (file_from_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", from_op);
		exit(100);
	}
	return (0);
}
