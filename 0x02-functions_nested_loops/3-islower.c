include "main.h"

/**
 * _islower - check the code.
 *
 * Return: Always 0.
 */

int _islower(void)
{
	int c = getchar();

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
