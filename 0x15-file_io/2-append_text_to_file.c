#include "main.h"

/**
 * append_text_to_file - Appends text.
 * @filename: A pointer.
 * @text_content: The string.
 *
 * Return: The function fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, a, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	a = write(o, text_content, leng);

	if (o == -1 || a == -1)
		return (-1);

	close(o);

	return (1);
}
