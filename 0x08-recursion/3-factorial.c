#include "main.h"

/*
 * The main function calculates the factorial of a given number.
 * @n: is a variable of any given number to be calculated.
 * Returns the factorial of n untill it ends with -1 as the base case.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

