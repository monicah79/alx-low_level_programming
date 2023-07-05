#include "main.h"

/**
 * a_sqrt_recursion - recurses to find the natural
 * @n: number to calculate the sqaure root of
 * @left: increment iterator
 * @right: last
 * Return: square root of number
 */
int a_sqrt_recursion(int n, int left, int right)
{
	int mid;

	if (left > right)
	{
		return (-1);
	}
	mid = left + (right - left) / 2;
	if (mid * mid == n)
	{
		return (mid);
	} else if (mid * mid > n)
	{
		return (a_sqrt_recursion(n, left, mid - 1));
	}
	return (a_sqrt_recursion(n, mid + 1, right));
}

/**
 * _sqrt_recursion - function that return the square root of a number
 * @n: the actual number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int result = a_sqrt_recursion(n, 0, n);

	return (result);
}
