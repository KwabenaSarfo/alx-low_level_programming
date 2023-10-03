#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer to a string in the file.
 *
 * Return: If the function fails - -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fdw, a, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	fdw = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(fdw, text_content, leng);

	if (fdw == -1 || a == -1)
		return (-1);

	close(fdw);

	return (1);
}
