#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: amount of the arguments
 *
 * Return: sum total
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int sum = 0, k;
        va_list arglist;

	if (n == 0)
		return (0);

	va_start(arglist, n);

	for (k = 0; k < n; k++)
        {
               sum += va_arg(arglist, int);
        }
	va_end(arglist);

	return (sum);
}
