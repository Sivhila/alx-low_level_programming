#include "main.h"

/*
 * @_strlen_recursion - function finds the length of a string.
 * @char *s: is a pointer to a character.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
