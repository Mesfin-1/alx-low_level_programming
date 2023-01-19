#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 * Description: If separator is NULL, it is not printed.
 * If one of the strings if NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list st;
	char *str;
	unsigned int in;

	va_start(st, n);

	for (in = 0; in < n; in++)
	{
		str = va_arg(st, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (in != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(st);
}
