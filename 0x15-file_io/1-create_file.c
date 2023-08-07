#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: name of the file to create.
 * @text_content: text to write.
 *
 * Return: 1 success.
 *         0 failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f, w, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(f, text_content, l);

	if (f == -1 || w == -1)
		return (-1);

	close(f);

	return (1);
}
