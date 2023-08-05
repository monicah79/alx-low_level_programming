#include <stdio.h>
#include "main.h"

/**
 * print_binary - function prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int leading_zeros = 1;

	if (n == 0)
	{
		printf("0");
		return;
	}

	while (mask)
	{
		if (n & mask)
			leading_zeros = 0;
		if (!leading_zeros)
			printf("%d", (n & mask) ? 1 : 0);
		mask >>= 1;
	}
}
