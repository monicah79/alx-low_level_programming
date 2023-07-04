#include "main.h"

/**
 *print_diagsums - check the code
 *@a: sum of diagonal
 *@size: size of array
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i, sum_main = 0, sum_secondary = 0;
	
	for (i = 0; i < size*size; i += size+1)
	{
		sum_main += a[i];
	}

	for (i = size-1; i < size*size-1; i += size-1)
	{
		sum_secondary += a[i];
	}
	printf("Sum of main diagonal: %d\n", sum_main);
	printf("Sum of secondary diagonal: %d\n", sum_secondary);
}
