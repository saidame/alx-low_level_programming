#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 * @filename: name of the file.
 * @text_content: text to add to the end of the file.
 *
 * Return: 1 success.
 *         0 failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, w, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	w = write(op, text_content, l);

	if (op == -1 || w == -1)
		return (-1);

	close(op);

	return (1);
}
