#include "main.h"

/*
 * _puts_recursion - a function that recursively prints out a string.
 * @char: takes character agruments.
 * @*s: is a pointer to a character.
 * @-putchar: prints the character.
 */

void _puts_recursion(char *s)
{

	if (*s <= '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
