#include "main.h"
/**
 * _memcpy - copies memory area from src to dest.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src.
 * Return: A pointer to the destination buffer @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; n > 0 ; i++, n--)
{
dest[i] = src[i];
}
return (dest);
}
