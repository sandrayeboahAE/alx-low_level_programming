#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @i: function parameter
 * Return: 1 on success 0 on failure
 */

int _isupper(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (1);
	else
		return (0);
}
