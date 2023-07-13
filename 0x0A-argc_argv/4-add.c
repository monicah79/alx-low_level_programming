#include <stdio.h>
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
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(atoi(argv[i])) || atoi(argv[i]) < 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%i\n", sum);
	}
	else
	{
		printf("%i\n", 0);
	}
	return (0);
}
