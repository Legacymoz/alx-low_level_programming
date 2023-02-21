#include "main.h"

/**
 * int _abs - prints the absolute value of an integer
 * @c: The number to be changed
 * Return: absolute value
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c + -1;
		return (abs_val);
	}
	return (c);
}
