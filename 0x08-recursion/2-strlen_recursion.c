#include "main.h"

/**
 * _strlen_recursion - a similar function to strlen
 * @s: string to be measured
 * Return: 0(Success)
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
