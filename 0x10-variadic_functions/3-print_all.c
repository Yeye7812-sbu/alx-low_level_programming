#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _printchar - print char type element from va_list
 * @list: va_list passed to function
 */

void _printchar(va_list l)
{
	printf("%c", va_arg(l, int));
}

/**
 * _printstr - print string element from va_list
 * @list: va_list passed to function
 */

void _printstr(va_list l)
{
	char *s;

	s = va_arg(l, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * _printfloat - print float type element from va_list
 * @list: va_list passed to function
 */

void _printfloat(va_list l)
{

	printf("%f", va_arg(l, double));
}

/**
 * _printint - print int type element from va_list
 * @list: va_list passed to function
 */

void _printint(va_list l)
{
	printf("%d", va_arg(l, int));
}

/**
 * print_all - print anything passed if char, int, float, or string.
 * @format: string of formats to use and print
 */

void print_all(const char * const format, ...)
{
	unsigned int k, j;
	va_list args;
	char *sep;

	checker storage[] = {
		{ "c", _printchar },
		{ "f", _printfloat },
		{ "s", _printstr },
		{ "i", _printint }
	};

	k = 0;
	sep = "";
	va_start(args, format);

	while (format != NULL && format[k / 4] != '\0')
	{
		j = k % 4;

		if (storage[j].type[0] == format[k / 4])
		{
			printf("%s", sep);
			storage[j].f(args);
			sep = ", ";
		}
		k++;
	}
	printf("\n");
	va_end(args);
}
