#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (success/correction)
 **/
int main(void)
{
int Num;
char base_16;
for (Num = 0; Num < 10; Num++)
{
  putchar((Num % 10) + '0');
}
for (base_16 = 'a'; base_16 <= 'f'; base_16++)
{
putchar(base_16);
}
putchar ('\n');
return (0);
}
