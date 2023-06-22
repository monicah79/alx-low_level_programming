#include <stdio.h>
#include "main.h"

/**
 * print_times_table - check the code.
 *
 * @n: type integer
 *
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int i, j, product;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;

			if (product < 10)
			{
				putchar(' ');
				putchar(' ');
				putchar(' ');
				putchar(product + '0');
			} else if
				(product < 100)
				{
					putchar(' ');
					putchar(' ');
					putchar(product / 10 + '0');
					putchar(product % 10 + '0');
				} else
				{
					putchar(' ');
					putchar(product / 100 + '0');
					putchar((product / 10) % 10 + '0');
					putchar(product % 10 + '0');
				}
		}
		putchar('\n');
	}
}
