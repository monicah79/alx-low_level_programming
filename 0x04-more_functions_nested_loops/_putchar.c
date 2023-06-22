#include <unistd.h>

/**
 * _putchar - check the code
 *
 * @c: return int
 *
 * Return: Always 0.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
