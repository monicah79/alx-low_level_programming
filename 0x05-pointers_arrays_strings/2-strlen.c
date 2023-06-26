#include "main.h"

/**
 * _strlen - check the code
 *
 * @s: return length of string
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
