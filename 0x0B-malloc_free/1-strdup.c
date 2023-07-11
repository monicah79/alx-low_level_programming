#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - create array copy using malloc
 * @str: copy the str parameter into s pointer
 * Return: pointer s
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;
	unsigned int size;

	if (str == NULL)
	{
		return (NULL);
	}

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}

	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
