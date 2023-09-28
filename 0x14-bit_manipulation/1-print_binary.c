#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of numbers
 * @n: number to be printed
 */

void print_binary(unsigned long int n)
{
	unsigned long int new;
	int b, c = 0;

	if (!c)
		putchar('0');

	for (b = 63; b >= 0; b--)
	{
		new = n >> b;
		if (new & 1)
		{
			putchar('1');
			c++;
		}
		else if (c)
			putchar('0');
	}
}
