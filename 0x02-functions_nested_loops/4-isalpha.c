#include "main.h"

/**
 * _isalpha - checks if a character is an alphabetic character
 *
 * @c: character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase, else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
