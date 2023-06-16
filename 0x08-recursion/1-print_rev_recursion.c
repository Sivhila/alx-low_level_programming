#include "main.h"

/*
 * _print_rev_recursion - the function print characters of string in reverse.
 * @s: is a pointer to a character.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
