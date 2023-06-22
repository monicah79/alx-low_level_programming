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

			if (j == 0)
			{
				printf("%2d", product);
			} else
			{
				printf(",%4d", product);
			}
		}
		printf("\n");
	}
}
