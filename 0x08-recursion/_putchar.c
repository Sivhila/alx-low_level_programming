#include <unistd.h>
#include "main.h"

/* Putchar - it is function that takes argument of single 
 * characters and prints it.
 * c - is single character argument.
 */ 
 

int _putchar (char c) {
	return write (1, &c, 1);
}
