#include <stdio.h>

/**
 *main - check the code
 *@argc: Print index 0
 *@argv: prints index 0
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc < 2)
	{
		printf("%s\n", argv[0]);
		return (1);
	}

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[1]);
	}
	return (0);
}
