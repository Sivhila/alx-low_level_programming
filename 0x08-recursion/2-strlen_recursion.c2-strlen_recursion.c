#include "main.h"

/*
 * @ _strlen_recursion -function finds the length of a string.
 * @*s - is a pointer to a character.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	putchar (s);
	s++;
	_strlen_recursion(s + 1);
}
