#include "main.h"

/**
 * _strpbrk - locates the first occurrence ia string
 * @s: the string to sanned
 * @accept:the string to be matches
 * Return: 0 or accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
