#include "main.h"
#include <string.h>

int is_palindrome_helper(char *s, int start, int end);
/**
 * is_palindrome - check the code
 *@s: print char
 * Return: Always 0.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - check the code
 *@s: print char
 *@start: print the first
 *@end: print last
 * Return: Always 0.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}
