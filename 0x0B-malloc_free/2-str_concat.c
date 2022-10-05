#include "main.h"

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int f, q, b, d;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (f = 0; s1[f] != '\0'; f++)
		;
	for (q = 0; s2[q] != '\0'; q++)
		;

	a = malloc((f * sizeof(*s1)) + (q * sizeof(*s2)) + 1);

	if (a == NULL)
		return (NULL);

	for (b= 0, d = 0; b < (f + q + 1); b++)
	{
		if (b < f)
			a[b] = s1[b];
		else
          		a[b] = s2[d++];
	}
	return (a);
}
