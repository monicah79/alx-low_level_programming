#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints a string
 * @argc: length of arguments
 * @argv: pointer to an array of strings/arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
