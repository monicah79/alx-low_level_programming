#include "main.h"
#include <math.h>

/**
 * is_prime_number - check the code
 *@n: print prime number
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
