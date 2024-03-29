#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: a NULL terminated string to write to the file
 *
 * Do not create the file if it does not exist
 *
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t op, rslt;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);

	rslt = write(op, text_content, len);
	close(op);

	if (rslt == -1)
		return (-1);

	return (1);
}
