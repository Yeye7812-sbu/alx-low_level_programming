#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print a string followed by a newline
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	va_list l;
	char *hold;

	va_start(l, n);

	for (k = 0; k < n; k++)
	{
		hold = va_arg(l, char*);

		if (hold == NULL)
			printf("(nil)");
		else
			printf("%s", hold);
		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(l);
}
