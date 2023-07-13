#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, num_letters, rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		return ("");

	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;

	rwr = write(fd, text_content, num_letters);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
