#include "main.h"
/**
 * main - check the code
 * swap_int: swap the values of two integer 1 and b
 * @a: a pointer to an int that will be updated
 * @b: b pointer to an int that will be updated
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int f;
f = *a;
*a = *b;
*b = f;
}
