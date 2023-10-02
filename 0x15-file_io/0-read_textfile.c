#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file
 * @letters: the number of letters to be read and printed
 * @filename: txt file to be read
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a;
	ssize_t b;
	ssize_t c;
	char *buf;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	b = read(a, buf, letters);
	c = write(STDOUT_FILENO, buf, b);

	free(buf);
	close(a);
	return (c);
}
