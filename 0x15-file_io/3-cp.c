#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @file_from: file from.
 * @file_to: file to.
 * @argv: An array of pointers to the arguments.
 * Return: void.
 */
void error_file(int file_fr, int file_t, char *argv[])
{
	if (file_fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Copies the contents of a file to another.
 * @argc: number of arguments.
 * @argv: array of pointers to the arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int file_fr, file_t, err_close;
	ssize_t nchars, wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_fr file_t");
		exit(97);
	}

	file_fr = open(argv[1], O_RDONLY);
	file_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_fr, file_t, argv);

	n_char = 1024;
	while (n_char == 1024)
	{
		n_chars = read(file_fr, buf, 1024);
		if (n_chars == -1)
			error_file(-1, 0, argv);
		wr = write(file_t, buf, nchars);
		if (wr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_fr);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_fr);
		exit(100);
	}

	err_close = close(file_t);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_fr);
		exit(100);
	}
	return (0);
}
