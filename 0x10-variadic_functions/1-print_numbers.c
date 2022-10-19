#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function is used for pirnting a number
 * @separator: separat the numbers
 * @n: numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	register unsigned int i;
	va_list nl;

	va_start(nl, n);
	for (i = 0; i < n; i++)
		printf("%i%s", va_arg(nl, int),
			(separator && i != n - 1) ? separator : "");
	va_end(nl);
	printf("\n");
}
