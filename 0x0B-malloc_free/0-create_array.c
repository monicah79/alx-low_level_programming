#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array using malloc
 * @size: total length of elements
 * @c: character assigned to each element
 * Return: pointer s
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else if (s == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
