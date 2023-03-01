#include <stdio.h>

/**
 * _strcat - concatinates two strings
 * @dest: the fist variable
 * @src: the second variable
 * Return: a pointer
 */

char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while  (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
