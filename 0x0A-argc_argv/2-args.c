#include <stdio.h>
#include "main.h"

/**
 * main - prints a string
 * @argc: length of arguments
 * @argv: pointer to an array of strings/arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
