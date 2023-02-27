#include <stdio.h>

/**
 * print_rev - prints the string in reverse
 * @s: its the string
 * Return: nothing
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	for (n = n - 1; n >= 0 ; n--)
	{
		putchar(s[n]);
	}
	putchar('\n');
}
