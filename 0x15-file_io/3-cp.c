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
	char *file_from = av[1], *file_to = av[2];
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_op = open(file_from, O_RDONLY);
	if (from_op == -1)
	{
		dprintf("Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	to_op = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_op == -1)
	{
		close(from_op);
		dprintf("Error: Can't write to %s\n", file_to);
		exit(99);
	}
	len = 1024;
}
