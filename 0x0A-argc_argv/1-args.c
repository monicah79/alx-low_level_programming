#include <stdio.h>

/**
 *main - check the code
 *@argc: number of command-line arguments
 *@argv: array of command-line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[argc] = 0;
	return (0);
}
