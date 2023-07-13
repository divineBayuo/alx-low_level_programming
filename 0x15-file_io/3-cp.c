#include "main.h"

/**
 * file_for_error - checks files if they can be opened
 * @file_from: where file is from
 * @file_to: where file is to
 * @argv: vector of arguments
 * Return: no return
 */

void file_for_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[1]);
		exit(99);
	}
}

/**
 * main - code checker
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, close_err;
	ssize_t num_chars, num_wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_for_error(file_from, file_to, argv);

	num_chars = 1024;

	while (num_chars == 1024)
	{
		num_chars = read(file_from, buffer, 1024);
		if (num_chars == -1)
			file_for_error(-1, 0, argv);
		num_wr = write(file_to, buffer, 1024);
		if (num_wr == -1)
			file_for_error(-1, 0, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
