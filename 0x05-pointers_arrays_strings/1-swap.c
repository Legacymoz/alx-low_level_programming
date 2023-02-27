#include <stdio.h>

/**
 * swap_int - swaps the value of two intergers
 * @a: the first interger
 * @b: the second interger
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int first = *a;
	*a = *b;
	*b = first;
}
