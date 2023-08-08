#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @letters: the number of letters it should read and print
 * @filename: file pointer
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (NULL);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	free(buffer);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
		return (0);

	close(op);

	return (wr);
}
