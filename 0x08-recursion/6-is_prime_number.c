#include "main.h"
#include <stdio.h>

/**
 * a_prime - check the code
 *@n: print prime number
 *@i: print prime number
 * Return: Always 0.
 */

int a_prime(int n, int i)
{
	if (i >= n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (a_prime(n, ++i));
}

/**
 * is_prime_number - check the code
 *@n: print prime number
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (a_prime(n, 2));

}
