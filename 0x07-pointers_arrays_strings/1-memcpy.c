#include "main.h"

/**
 * _memcpy - prints buffer in hexa
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 *@n: unsigned int
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*dest++ = *src++;
	}
	return (dest);
}
