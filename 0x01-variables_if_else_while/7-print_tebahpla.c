#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success/correct)
 **/
int main(void)
{
char alphabet;
for (alphabet = 'Z'; alphabet >= 'A'; alphabet--)
{
putchar(alphabet);
}
putchar ('\n');
return (0);
}
