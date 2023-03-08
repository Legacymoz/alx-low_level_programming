#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - entry point
 * @s: string
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	putchar(*s);
}
