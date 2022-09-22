#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string to capitalize
 *
 * Return: address of s
*/

char *cap_string(char *s)
{
	int k = 0, l;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + k))
	{
		if (*(s + k) >= 'a' && *(s + k) <= 'z')
		{
			if (k == 0)
				*(s + k) -= 'a' - 'A';
			else
			{
				for (l = 0; l <= 12; l++)
				{
					if (a[l] == *(s + k - 1))
						*(s + k) -= 'a' - 'A';
				}
			}
		}
		k++;
	}
	return (s);
}
