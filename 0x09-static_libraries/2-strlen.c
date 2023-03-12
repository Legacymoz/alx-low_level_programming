#include <stdio.h>

/**
 * _strlen - shows length of string
 * @s: interger that has the string
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
        int len;

        while (*s != '\0')
        {
                len++;
                s++;
        }
        return (len);
}
