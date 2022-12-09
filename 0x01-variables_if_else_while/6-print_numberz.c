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
putchar ('\n');
putchar((base_10 % 10) + '0');
}
return (0);
}
