#include <stdio.h>

/**
 * main - main function
 *
 */

int main(void)
{
	int i = 0, j = 7, i2 = 1, j2 = 8, i3 = 2, j3 = 9;

	while (i <= j)
	{
		i2 = i + 1;
		while (i2 <= j2)
		{
			i3 = i2 + 1;
			while (i3 <= j3)
			{
				putchar(i + '0');
				putchar(i2 + '0');
				putchar(i3 + '0');

				if (i != j)
				{
					putchar(',');
					putchar(' ');
				}
				i3++;
			}
			i2++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
