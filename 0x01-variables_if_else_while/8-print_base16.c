#include <stdio.h>

/**
 * main
 * Return: Always 0 (success)
 */

int main(void)
{
	int num = 0;
	char let = 'a';

	while (num <= 10)
	{
		putchar(num + '0');
		num++;
	}
	while (let <= 'f')
	{
		putchar(let);
		let++;
	}
	putchar('\n');
	return (0);
}
