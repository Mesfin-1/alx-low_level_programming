#include "main.h"



/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int lon = 0, index;
while (s[index++])
lon++;
for (index = lon - 1; index >= 0; index--)
_putchar(s[index]);
_putchar('\n');
}
