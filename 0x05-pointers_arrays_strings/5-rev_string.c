#include "main.h"
#include <string.h>

/**
 * rev_string - display string of char in reverse
 *
 * @s: This is pointer variable
 *
 * Return: always 0
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
