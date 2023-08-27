#include <stdio.h>

/**
 * _sqrt - finds the square root
 * @a: input number
 * Return: square root of a
 */

double _sqrt(double a)
{
	float sqrt, tmp;

	sqrt = a / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (a / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints the largest
 *                        prime factor of number (num)
 * @num: number to find
 *
 */

void largest_prime_factor(long int num)
{
	int pn, ln;

	while (num % 2 == 0)
		num = num / 2;

	for (pn = 3; pn <= _sqrt(num); pn += 2)
	{
		while (num % pn == 0)
		{
			num = num / pn;
			ln = pn;
		}
	}

	if (num > 2)
		ln = num;
	printf("%d/n", ln);
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
