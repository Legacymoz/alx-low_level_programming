#include<stdio.h>

/**
 * puts_half - prints half of the string
 * @str: the string
 * Return: nothing
 */
void puts_half(char *str)
{
	int n = 0;
	int mid;

	while (str[n] != '\0')
	{
		n++;
	}
	if ((n % 2) == 0)
	{
		mid = n / 2;
	}
	else
	{
		mid = (n - 1) / 2;
	}
	while (mid < n)
	{
		putchar(str[mid]);
		mid++;
	}
	putchar('\n');
}
