#include "main.h"
#include <string.h>

/**
 * puts2 - This checks for Uppercase char
 *
 * @str: This is a char
 *
 * Return: always 0
 */

void puts2(char *str)
{
	int n = strlen(str);
	int i;

	for (i = 0; i < n; i++)
	{
		if ((str[i] - '0') % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
