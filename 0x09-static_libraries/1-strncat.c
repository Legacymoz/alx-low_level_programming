#include <stdio.h>

/**
 * strncat - concatenates two strings
 * @dest: 1 var
 * @src: 2 var
 * @n: oppposing var
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
        int a = 0;
        int b = 0;

        while (dest[a] != '\0')
        {
                a++;
        }
        while ((b < n) && (src[b] != '\0'))
        {
                dest[a] = src[b];
                a++;
                b++;
        }
        dest[a] = '\0';
        return (dest);
}
