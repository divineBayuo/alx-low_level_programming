#include "main.h"

/**
 * append_text_to_file - function that appends text
 * at the end of a file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add
 * at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num_letters, rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		rwr = write(fd, text_content, num_letters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
