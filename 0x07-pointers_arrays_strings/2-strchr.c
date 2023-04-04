#include <stdio.h>
#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: string
 * @c: character
 * Return: 0(Success)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
