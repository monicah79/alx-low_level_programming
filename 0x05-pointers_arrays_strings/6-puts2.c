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
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
