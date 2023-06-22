#include "main.h"

/**
 * _isupper - check the code.
 *
 * @c: return integer
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
