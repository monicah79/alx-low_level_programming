#include "main.h"

/**
 * swap_int - check the code
 *
 * @a: return value of temp
 * @b: return value of a
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
