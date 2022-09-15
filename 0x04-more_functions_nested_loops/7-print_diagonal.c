#include "main.h"

/**
 * print_diagonal - function draws a diagonal line in the terminal
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 */

void print_diagonal(int n)
{
	int c, k;

	c = 0;

	while (n > 0)
	{
		k = c;
		while (k > 0)
		{
			_putchar(' ');
			k--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}
