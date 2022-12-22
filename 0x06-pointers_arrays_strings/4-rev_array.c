#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: An array of integers
 * @n: Number of elements to swap
 * Return: empty
 */
void reverse_array(int *a, int n)

{
int tmp, index;
for (index = n - 1; index >= n / 2; index--)
{ 
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
