#include "main.h"

/**
 * append_text_to_file - function that appends text at the
 * end of a file
 * @filename: is the name of the file and
 * text_content is the NULL
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nltrs;
	int rwr;

	if (!filename)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	return (-1);

	if (text_content)
	{
	for (nltrs = 0; text_content[nltrs]; nltrs++)

	rwr = write(fd, text_content, nltrs);

	if (rwr == -1)
	return (-1);
	}

	close(fd);

	return (1);
}
