#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char zh;
	int j;

	j = 0;

	while (j < 10)
	{
		zh = 'a';
		while (zh <= 'z')
		{
			_putchar(zh);
			zh++;
		}
		_putchar('\n');
		j++;
	}
}
