#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filde;
	ssize_t num_rd;
	ssize_t num_wr;
	char *buffer;

	if (!filename)
		return (0);

	filde = open(filename, 0_RDONLY);

	if (filde == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	num_rd = read(filde, buffer, letters);
	num_wr = write(STDOUT_FILENO, buffer, num_rd);

	close(filde);

	free(buffer);

	return (num_wr);
}
