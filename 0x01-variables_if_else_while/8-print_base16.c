#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all numbers of base64 in lowercase.
 * Only use putchar, and only 3 times.
 * Return: 0
 */

int main(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
