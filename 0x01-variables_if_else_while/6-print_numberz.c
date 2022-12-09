#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success/correct)
 **/
int main(void)
{
int base_10;
for (base_10 = 0; base_10 < 10; base_10++)
{
putchar((base_10 % 10) + '0');
}
putchar('\n');
return (0);
}
