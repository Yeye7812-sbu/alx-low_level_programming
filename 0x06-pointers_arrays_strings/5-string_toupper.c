#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: string to be changed
 *
 * Return: address tp the string
 */

char *string_toupper(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		if (str[s] >= 'a' && str[s] <= 'z')
			str[s] -= 32;
		s++;
	}
	return (str);
}
