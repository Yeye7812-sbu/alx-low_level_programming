#include <stdio.h>

/**
 * main - Entry point
 * Description: Print numbers from 0 to 99.
 * Only use `putchar` up to 5 times.
 * Not allowed to use variables of type `char`.
 * Return: 0
 */

int main(void)
{
	int i, d, k;

	for (i = 0; i < 100; i++)
	{
		d = i / 10;
		k = i % 10;

		putchar(d + '0');
		putchar(k + '0');

		if (i < 99)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
