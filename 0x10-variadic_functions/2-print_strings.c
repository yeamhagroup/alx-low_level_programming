#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints the string
 * @separator: separat the string
 * @n: length of the string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	register unsigned int i;
	char *str;
	va_list argum;

	va_start(argum, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(argum, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && !i)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(argum);
}
