#include <stdio.h>

/**
 * main - Entry point
 * Description: Use `putchar` to print all letters but the letter 'q' and 'e'
 * Return: Aways 0 if exited successfully
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
