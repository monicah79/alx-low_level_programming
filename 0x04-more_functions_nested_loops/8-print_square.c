#include "main.h"

#include "main.h"

/**
 * print_square - check the code
 *
 * @size: print int
 *
 * Return: Always 0.
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int p, q;

		for (p = 0; p < size; p++)
		{
			for (q = 0; q < size; q++)
				{
					_putchar('#');
				}
				_putchar('\n');
		}
	}
}
