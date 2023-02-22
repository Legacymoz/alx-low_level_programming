#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
/*the infinite loop is due to the lack of an increment of i this i forever remains 0 */
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
