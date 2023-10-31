#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: filename
 * @text_content: content of the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nltrs;
	int rwr;

	if (!filename)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	return (-1);

	if (!text_content)
	text_content = "";

	for (nltrs = 0; text_content[nltrs]; nltrs++)

	rwr = write(fd, text_content, nltrs);

	if (rwr == -1)
	return (-1);

	close(fd);

	return (1);
}
