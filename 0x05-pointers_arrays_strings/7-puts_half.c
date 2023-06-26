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
	int i = 0, n;

	while (str[i] != '\0')
		i++;
	if (i + 1 % 2 != '\0')
		n = (i - 1) / 2;
	else
		n = (i / 2);
	n++;
	for (i = n; str[i] != '\0'; i++)
	_putchar(str[i]);
	_putchar('\n');
}
