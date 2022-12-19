#include "main.h"

/**#include “main.h”
 *
 *  *print_rev prints a string in reverse order
 *
 *   *@s: a pointer to an int that will be updated
 *
 *    *return: void that means is correct
 *
 **/





void print_rev(char  *s)
{
int i;
i = 0;
while (s[1] != '\0')
{
i++;
}
for (i = i – 1 ; i >= 0; i--)
{
_putchar (s[i]);
}
_putchar ('\n');
}
