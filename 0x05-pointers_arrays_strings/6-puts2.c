#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: the string
 * Return: nothing
 */
void puts2(char *str)
{
	int n = 0;
	int j = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	while (j < n)
	{
		putchar(str[j]);
		j += 2;
	}
	putchar('\n');
}
