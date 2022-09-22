#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 *
 * Return: void
 */

void print_line(char *c, int s, int l)
{
	int n, o;

	for (n = 0; n <= 9; n++)
	{
		if (n <= s)
			printf("%02x", c[l * 10 + n]);
		else
			printf("  ");
		if (n % 2)
			putchar(' ');
	}
	for (o = 0; o <= s; o++)
	{
		if (c[l * 10 + o] > 31 && c[l * 10 + o] < 127)
			putchar(c[l * 10 + o]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			print_line(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
