#include "main.h"
/**
 * _print_rev_recursion - Print a string in reverse
 * @s: the string to reverse
 *
 *  Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
}
