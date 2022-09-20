#include "main.h"

/**
 *_strlen - returns the length of a string
 * @s: character type pointer
 *Return: returns length of string;
 */
int _strlen(char *s)
{
	int len = 0;
	while (*(s + len) != '\0')
		len++;

	return (len);
}
