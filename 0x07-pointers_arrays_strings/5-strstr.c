#include "main.h"
#include <stddef.h>
/**
 *_strstr - locates substring
 *@haystack: char parameter
 *@needle: char parameter
 *Return: needle in haystack, null if false
 */


char *_strstr(char *haystack, char *needle)
{
	int i, j, c;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		c = 0;

		for (; needle[j + c] != '\0' && haystack[i + c] != '\0'; c++)
		{
			if (haystack[i + c] != needle[j + c])
			{
				break;
			}
		}

		if (needle[j + c] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
