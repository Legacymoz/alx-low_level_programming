#include "main.h"

/**
 * _strspn - gets the lenth of a prefix substring
 * @s: first pointer
 * @accept: second pointer
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int n;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
