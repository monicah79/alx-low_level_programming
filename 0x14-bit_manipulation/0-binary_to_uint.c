#include "main.h"

/**
 * binary_to_uint - function converts a binary number to unsigned int.
 * @b: string containing the binary number.
 *
 * Return: returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int dec_value = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		dec_value = 2 * dec_value + (b[k] - '0');
	}

	return (dec_value);
}
