#include <stdio.h>

/**
 * main - main block, solve fizz buzz from numbers 1 to 100
 * Description: Multiples of 3, print Fizz. Multiples of 5, print Buzz.
 * Multiples of both 3 and 5 should print FizzBuzz.
 * Return: 0
 */

int main(void)
{
	int c;

	c = 1;
	while (c <= 100)
	{
		if (c % 3 == 0 && c % 5 == 0)
			printf("FizzBuzz");
		else if (c % 3 == 0)
			printf("Fizz");
		else if (c % 5 == 0)
			printf("Buzz");
		else
			printf("%d", c);

		if (c != 100)
			printf(" ");
		c++;
	}
	printf("\n");

	return (0);
}
