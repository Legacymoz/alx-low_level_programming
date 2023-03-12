#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer
 * @src: pointer
 * @n: number of times
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        int i;
        int a = n;

        for (i = 0; i < a; i++)
        {
                dest[i] = src[i];
        }
        return (dest);
}
