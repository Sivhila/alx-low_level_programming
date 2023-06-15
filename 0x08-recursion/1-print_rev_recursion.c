#include "main.h"

/*
 * The function main - serves as a starting point for the program.
 * @s - is a pointer to a character.
 * @_print_rev_recursion - prints a string of characters in reverse.
 * @putchar - prints a character.
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_print_rev_recursion(s + 1);
}
