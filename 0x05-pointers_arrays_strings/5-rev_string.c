#include <stdio.h>
#include "main.h"

/**
* rev_string - Reverses a string
* @s: string to be reversed
*
* Return: nothing
*/

void rev_string(char *s)
{

	int j, tmp, len = _strlen(s);

	for (i = 0; j < len / 2; j++)
	{
		tmp = *(k + j);
		*(k + j) = *(k + len - j - 1);
		*(k + len - j - 1) = tmp;
	}
}

/**
* _strlen - returns the length of a string
* @s: string
*
* Return: the length of the given string
*/

int _strlen(char *k)
{
	int len = 0;

	while (*(k + len) != '\0')
		len++;

	return (len);
}
