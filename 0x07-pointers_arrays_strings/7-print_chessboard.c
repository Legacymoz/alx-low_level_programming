#include "main.h"

/**
 * print_chessboard - prints the chess board
 * @a: array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 0; n++)
		{
			putchar(a[i][n]);
		}
		putchar('\n');
	}
}
