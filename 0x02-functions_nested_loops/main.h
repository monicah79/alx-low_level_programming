#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - check the code
 *
 * Return: Always 0.
 */

int _putchar(void)
{
	return (0);
}

/**
 * print_alphabet - check the code
 *
 * Return: nothing.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

#endif /* MAIN_H */
