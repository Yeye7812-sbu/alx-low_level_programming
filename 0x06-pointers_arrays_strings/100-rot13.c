#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: address of s
 */

char *rot13(char *s)
{
	int c, d;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (c = 0; *(s + c); c++)
	{
		for (d = 0; d < 52; d++)
		{
			if (a[d] == *(s + c))
			{
				*(s + c) = b[d];
				break;
			}
		}
	}
	return (s);
}
