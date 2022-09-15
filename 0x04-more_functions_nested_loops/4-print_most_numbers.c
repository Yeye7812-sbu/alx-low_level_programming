#include "main.h"

/**
 * print_most_numbers - Print numbers 0 to 9, excluding 2 and 4.
 * followed by a new line
 * Description: Can only use _putchar twice.
 */

void print_most_numbers(void)
{
	int j;

	j = 0;
	while (j < 10)
	{
		if (j != 2 && j != 4)
			_putchar(j + '0');

		j++;
	}
	_putchar('\n');
}
