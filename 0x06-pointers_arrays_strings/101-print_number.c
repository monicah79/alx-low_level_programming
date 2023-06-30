#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#include "main.h"

/**
 * print_number - check the code
 *
 * @n: return int
 *
 * Return: Always 0.
 */

void print_number(int n)
{
	char s[10] = "";
	int i = 0;
	char chr;
	
	if (n == 0)
        {
                _putchar('0');
		return;
        }

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		while (n != 0)
		{
			chr = (n % 10) + '0';
			n /= 10;
			s[i] = chr;
			i++;
		}
	} else
	{
		while (n != 0)
		{
			chr = (n % 10) + '0';
			n /= 10;
			s[i] = chr;
			i++;
		}
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}

