#include "main.h"
#include <stdio.h>
/**
 * puts2 - Function to every other character of string starting with the
 * first letter
 *
 * @str: String to print
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int strlen, i;

	strlen = 0;

	while (str[strlen] != '\0')
	{
		strlen++;
	}

	for (i = 0; i < strlen; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
