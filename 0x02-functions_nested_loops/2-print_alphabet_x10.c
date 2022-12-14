#include "main.h"
/**
 * main - Entry point
 * Description: print_alphabet_x10 function will print the alphabet 10 times
 * Return: x10 a-z
 **/
void print_alphabet_x10(void)

{
int count = 0;
char letter;
while (count++ <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
}
