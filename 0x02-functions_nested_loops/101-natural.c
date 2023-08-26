#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024
 * Return: Always (success)
 */

int main(void)

{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
	if ((i % 5 == 0) || (i % 3 == 0))
	sum += 1;
	}
	printf("%d\n", sum);
	return (0);
}
