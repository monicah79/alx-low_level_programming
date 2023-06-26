#include "main.h"

/**
 * _isupper - This checks for Uppercase char
 *
 * @c: This is a char
 *
 * Return: always 0
 */

void puts2(char *str)
{
	int i, j;

	for (i = 0; i >= 0; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
	}

	for (j = 0; j < i - j; j++)
	{
		_putchar(str[j]);
		j += 1;
	}
	_putchar('\n');
}
