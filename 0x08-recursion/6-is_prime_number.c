#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - entry point
 * @n: integer
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	int i = 1;

	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (i++, is_prime_number(n));
}
