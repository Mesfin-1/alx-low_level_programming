#include "main.h"



/**
 * _puts- prints a string
 * @astr a pointer to an int that will be updated
 * return: void that means is correct
 **/



void _puts(char  *str)

{
char *c;
int m;
c = str;
for (m = 0; c[m]; m++)
{
_putchar (c[m]);
}
_putchar ('\n');
}
