#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return: Void
 */

void print_alphabet_x10(void)
{
	int num = 0;
	char alpha;

	while (num <= 10)
	{
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		num++;
	}
}
