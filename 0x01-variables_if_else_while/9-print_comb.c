#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
