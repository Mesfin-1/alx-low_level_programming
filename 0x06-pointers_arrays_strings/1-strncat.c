#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: The destination value
 * @src: The source value
 * @n: The limit of the concatenation
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)

{
int i, j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = o;
while (j < n && src[j] !='\0')
{
dest[dlen] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
