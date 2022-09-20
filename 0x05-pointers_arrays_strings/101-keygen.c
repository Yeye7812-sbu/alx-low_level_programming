#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: generated password
 */

int main(void)
{
	char a;
	int y;

	srand(time(0));
	while (y <= 2645)
	{
		a = rand() % 128;
		y += a;
		putchar(a);
	}
	putchar(2772 - y);

	return (0);
}
