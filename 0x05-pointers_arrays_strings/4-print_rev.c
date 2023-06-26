#include "main.h"

/**
 * print_rev - display string of char in reverse
 *
 * @s: This is pointer variable
 *
 * Return: always 0
 */

void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
