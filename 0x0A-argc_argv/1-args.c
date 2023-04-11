#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguements passed to the program
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: 0(Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
