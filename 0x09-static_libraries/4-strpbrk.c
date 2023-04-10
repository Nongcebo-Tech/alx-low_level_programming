#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first occurrence in the string
 * @s: input
 * @accept: input
 * Return: 0(Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
