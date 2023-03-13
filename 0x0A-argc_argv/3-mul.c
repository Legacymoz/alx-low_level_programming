#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int result;
	int i = 0;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	while (i < argc)
	{
		i++;
	}
	i = i - 1;
	if (i != 2)
	{
		printf("Error\n");
		return (1);
	}
	result = a * b;
	printf("%d\n", result);
	return (0);
}
