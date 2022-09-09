#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,followed by a new line
 * Description: Use `putchar` function to print the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
