#include <stdio.h>

/**
 * _puts - inpts and prints a string
 * @str: string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
