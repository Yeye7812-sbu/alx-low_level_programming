#include "main.h"

/**
 * more_numbers - function prints 10 times the numbers, from 0 to 14
 * followed by a new line
 * Description: Can only use _putchar 3 times
 */

void more_numbers(void)
{
	int j, k;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 15; k++)
		{
			if (k >= 10)
				_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}
