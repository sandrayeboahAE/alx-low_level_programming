#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function to create a file
 * @filename: name of file to be created
 * @text_content: centent for the file to be created
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int a, b, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a, text_content, l);

	if (a == -1 || b == -1)
		return (-1);
	close(a);

	return (1);
}
