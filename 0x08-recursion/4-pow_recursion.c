#include "main.h"
/**
 * _pow_recursion - function that prints the number of a specific power
 * @x: the actual number
 * @y: the power index
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
