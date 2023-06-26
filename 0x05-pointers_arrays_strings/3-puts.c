#include "main.h"

/**
 * _puts - output string of char
 *
 * @str: This is a char
 *
 * Return: always 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
		_putchar(str[i]);
	}
	_putchar('\n');

}
