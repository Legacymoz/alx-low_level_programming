#include<stdio.h>

/**
 * main - Print all letters except for e and q
 * Return: Always 0
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
