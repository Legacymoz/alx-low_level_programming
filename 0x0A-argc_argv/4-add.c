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
	int i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		int result;
		
		for (i = 1; i < argc; i++)
		{
			int num;
			
			num = atoi(argv[i]);
			if (num >= 0)
			{
				result = result + num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}
	return (0);
}
