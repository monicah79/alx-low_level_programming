#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;
	int e;

	for (d = 48; d < 58; d++)
	{
		putchar(d);
	}
	for (e = 'a'; e < 'g'; e++)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}
