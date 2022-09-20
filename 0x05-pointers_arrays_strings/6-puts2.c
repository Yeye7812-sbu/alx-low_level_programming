#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string
 *
 * Return: 0
 */

void puts2(char *str)
{
	int k = 0;

	while (*(str + k) != '\0')
	{
		if (k % 2 == 0)
			putchar(*(str + k));
		k++;
	}
	putchar(10);
}
