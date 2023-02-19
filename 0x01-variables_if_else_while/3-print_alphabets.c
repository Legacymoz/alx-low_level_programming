#include<stdio.h>

/**
 * main - Print both uppercase and lowercsae letters
 * Return: Always 0
 */

int main(void)
{

	char alpha = 'a';
	char capital = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}
	putchar('\n');
	return (0);
}
