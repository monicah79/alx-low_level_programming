#include <stddef.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - it prints each array elem on a newl
 * @array: array
 * @size: how many elem to print
 * @cmp: pointer to print in regular or hex
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
