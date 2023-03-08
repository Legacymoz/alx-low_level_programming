#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - entry point
 * @n: integer
 * @i: the square root
 * Return: -1
 */

int _sqrt_recursion(int n)
{
	int i = n / n;
	int sq = i * i;

	if (sq > n)
	{
		return (-1);
	}
	if (sq == n)
	{
		return (i);
	}
	i++;
	return (_sqrt_recursion(n));
}
