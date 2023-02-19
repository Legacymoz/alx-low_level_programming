#include<stdio.h>

/**
 * main - Printing alphabet letters
 * Return: Always 0
 */

int main(void)
{
	char alpha = 'a';
		while (alpha <= 'z')
		{
			putchar (alpha);
			alpha++;
		}

		putchar('\n');

	return (0);
}
