#include <stdio.h>

/**
 * main - A program that prints t size of various computer types
 * Return 0 (Success)
 */

int main(void)

{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)siz
eof(a));
printf("size of an int: %lu byte(s)\n", (unsigned long)siz
eof(b));
printf("size of a long int: %lu bytes(s)\n", (unsigned lon
g)sizeof(c));
printf("size of a long long int: %lu bytes(s)\n", (unsigne
d long)sizeof(d));
printf(size of a float: %lu bytes(s)\n", (unsigned long)s
izeof(f));
return (0);
}
