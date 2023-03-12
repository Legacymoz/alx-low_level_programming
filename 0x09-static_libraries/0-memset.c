#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: the pointer
 * @b: byte
 * @n: the number of times
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
        int i;

        for (i = 0; n > 0; i++)
        {
                s[i] = b;
                n--;
        }
        return (s);
}
