#include "main.h"
#include <stdio.h>

/**
 * _strchr - check the code
 *@s: return char
 *@c: return char
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
