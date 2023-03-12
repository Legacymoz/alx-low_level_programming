#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: variablr
 * @src: variable
 * @n: limit size
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
        int a = 0;

        while (a < n && src[a] != '\0')
        {
                dest[a] = src[a];
                a++;
        }
        while (a < n)
        {
                a = '\0';
                a++;
        }
        return (dest);
}
