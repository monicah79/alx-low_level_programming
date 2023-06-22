#include "main.h"

/**
 * print_line - check the code
 *
 * @n: interger
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
