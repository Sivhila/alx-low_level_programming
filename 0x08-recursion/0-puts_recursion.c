#include "main.h"

/*
 * The main function call starts from int main.
 * *s - represents a pointer to a character.
 * str - is n array of characters.
 * _puts_recursion - a function that recursively prints out a string.
 */

void _puts_recursion(char *s);
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
