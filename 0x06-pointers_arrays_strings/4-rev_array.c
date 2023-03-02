#include <stdio.h>

/**
 * reverse_array - reverses the content of arrays
 * @a: variable
 * @n: number
 * Return: a
 */
void reverse_array(int *a, int n)
{
	int j = 0;
	int t = n;

	while (j < n)
	{
		a[j] = a[t];
		j++;
		t--;
	}
}
