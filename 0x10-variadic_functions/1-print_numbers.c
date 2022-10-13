#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print each number with separator, followed by a newline
 * @separator: string to be printed between numbers
 * @n: number of args passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	va_list printArg;

	va_start(printArg, n);

	for (k = 0; k < n; k++)
	{
		if (k > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(printArg, int));
	}
	va_end(printArg);
	printf("\n");
}
