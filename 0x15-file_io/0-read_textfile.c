#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print.
 * @filename: text file
 * @letters: number of letters
 * Return: w- actual number of bytes read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf1;
	ssize_t fdw;
	ssize_t a;
	ssize_t b;

	fdw = open(filename, O_RDONLY);
	if (fdw == -1)
		return (0);
	buf1 = malloc(sizeof(char) * letters);
	b = read(fdw, buf1, letters);
	a = write(STDOUT_FILENO, buf1, b);

	free(buf1);
	close(fdw);
	return (a);
}
