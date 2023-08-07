#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: name of file to read
 * @letters: number of bytes to be read
 * Return: number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t f;
	ssize_t w;
	ssize_t t;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(f, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(f);
	return (w);
}
