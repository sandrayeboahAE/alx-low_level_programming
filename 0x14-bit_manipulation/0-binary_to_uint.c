#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin  = 0;
	int a;

	if (b == NULL)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		bin = 2 * bin + (b[a] - '0');
	}

	return (bin);
}
