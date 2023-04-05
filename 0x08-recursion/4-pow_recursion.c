#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to power y
 * @y: power
 * @x: value to raise
 *
 * Return: result of power
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
