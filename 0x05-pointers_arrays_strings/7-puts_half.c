#include "main.h"
#include <string.h>

/**
 * puts_half - check the code
 *
 * @str: prints string
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int n = strlen(str);
	int start = n / 2;
	int i;

	for (i = start; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
