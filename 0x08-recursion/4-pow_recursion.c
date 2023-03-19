#include "main.h"

/**
 * _pow_recursion - returns the value of x raised
 * to the power of y
 * @x: base
 * @y: power
 *
 * Return: if (x > 0) - x raised to the power of y
 * if (x < 0) - return -1.
 */

int _pow_recursion(int x, int y)
{
	int r = x ** y;

	if (x < 0)
		return (-1);
	
	return (r);
}	
