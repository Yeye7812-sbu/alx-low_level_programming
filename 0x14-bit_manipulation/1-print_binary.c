#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *@n: number to convert
 *Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int a, c = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	a = 2;

	while (a <= n && c < 62)
	{
		a <<= 1;
		c++;
	}

	if (c != 62)
		a >>= 1;

	while (a != 0)
	{

		if ((a & n) != 0)
		{
			c++;
			_putchar('1');
		}
		else
		{
			c++;
			_putchar('0');
		}
		a >>= 1;
	}
}
