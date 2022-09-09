#include <stdio.h>
/**
 * main - Entry point
 * Description: Use putchar to print all letters but the letter 'q' and 'e'.
 * Return: Always 0 if exited properly
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
Footer

