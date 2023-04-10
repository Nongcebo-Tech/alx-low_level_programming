#include "main.h"

/**
 * _memcpy - copies bytes from memory area
 * @dest: memory stored here
 * @src: memory copied from here
 * @n: number of bytes
 * Return: 0(Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
