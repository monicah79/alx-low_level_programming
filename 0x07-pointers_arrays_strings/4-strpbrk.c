#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strpbrk - check the code
 *
 * @s: return a charr
 * @accept: return char
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	char alphabet[26];
	size_t i;

	for (i = 0; i < 26; ++i)
	{
		alphabet[i] = 0;
	}
	for (i = 0; i < strlen(accept); ++i)
	{
		alphabet[accept[i] - 'a'] = 1;
	}
	for (i = 0; i < strlen(s); ++i)
	{
		if (alphabet[s[i] - 'a'] != 0)
		{
			return (s + i);
		}
	}
	return (NULL);
}
