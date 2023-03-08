#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - entry level
 * @s: string
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar ('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
