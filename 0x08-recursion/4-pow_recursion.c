#include "main.h"

/*
 * The function _pow_recursion calculates the power of a given number.
 * @x: is the variable of a number to calculate its power.
 * @y: is the variable representing power to calculate the number.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	if (y < 0)
	{
		return (1 / (_pow_recursion(x, -y)));
	}
	return (x * _pow_recursion(x, y - 1));
}
