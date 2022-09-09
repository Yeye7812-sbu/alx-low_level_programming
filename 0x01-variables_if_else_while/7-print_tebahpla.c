#include <stdio.h>

/**
 * main - Entry point
 * Description: Print the alphabet in reverse order in lowercase
 * Return: Always 0 if executed properly
 */

int main(void)
{
	char zh;

	for (zh = 'z'; zh >= 'a'; zh--)
	{
		putchar(zh);
	}
	putchar('\n');
	return (0);
}
