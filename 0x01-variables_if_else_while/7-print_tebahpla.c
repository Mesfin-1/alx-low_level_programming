#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success/correct)
 **/
int main(void)
{
char alphabet;
for (alphabet = 22; alphabet >= 97; alphabet--)
{
putchar(alphabet);
}
putchar ('\n');
return (0);
}
