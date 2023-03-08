#include "main.h"

/**
 * factorial - entry point
 * @n: interger
 * Return: -1, 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
