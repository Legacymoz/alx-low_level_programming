#include <stdio.h>
#include"main.h"

/**
 * atoi - entry level
 * s: integer
 * Return: nothing
 */
int _atoi(char *s)
{
	int len;

        while (*s != '\0')
        {
                len++;
                s++;
        }
	return (len);
}
