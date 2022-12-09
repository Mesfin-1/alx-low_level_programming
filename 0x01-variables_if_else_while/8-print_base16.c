#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (success/correction)
 **/
int main(void)
{
int i;
char base_16;
for (i = 0; i < 10; i++)
{
putchar((i % 10) + '0');
}
for (base_16 = 'a'; base_16 <= 'f'; base_16++)
{
putchar(base_16);
}
putchar ('\n');
return (0);
}
