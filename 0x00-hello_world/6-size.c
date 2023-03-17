#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return 0 (Success)
 */

int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of char: %lu byte(s)\n", (unsigned long)sizeofof(a));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeofof(b));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeofof(c));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeofof(d));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeofof(f));
return (0);
}

