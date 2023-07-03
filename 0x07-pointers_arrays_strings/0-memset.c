#include "main.h"

/**
 * _memset - prints memset
 * @s: the address of memory to print
 * @b: the size of the memory to print
 *@n: print unsigned int
 * Return: Value
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
