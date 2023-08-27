#include "main.h"
#include <stdio.h>

/**
 * print_line - prints straight line on the terminal
 * @n: number of times that charater '_' will be printed
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
			putchar('_');
		putchar('\n');
	}
}
