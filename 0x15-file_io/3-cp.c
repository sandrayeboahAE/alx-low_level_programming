#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buffer(char *file);
void close_file(int a);

/**
 * create_buffer - allocates for a buffer
 * @file: name of file
 * Return: pointer to the newly-allocated buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes file
 * @a: file descriptor
 */

void close_file(int a)
{
	int b;

	b = close(a);

	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close a %d\n", a);
		exit(100);
	}
}

/**
 * main - copies content to another file
 * @argc: number of arguments supplied
 * @argv: array of pointers to the argument
 * Return: 0 if successfull
 * description: if the number of argument is not correct - exit with code 97
 * if you cannot create or write to file_to - exit with code 99
 * if file_from does not exit or can't be read - exit with code 98
 * if file_to or file_from cant't be closed - exit with code 100
 */

int main(int argc, char *argv[])
{
	int r, w, to, from;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "error: can't read file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "error: cant write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}

	while (r > 0);
	free(buffer);
	close_file(to);
	close_file(from);

	return (0);
}
