#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: the pointer to convert
 * Return: integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int ab = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ab = (ab * 10) + (s[c] - '0');
			c++;
		}
		if (isi == 1)
		{
			break;
		}
		c++;
	}
	ab *= min;
	return (ab);
}
