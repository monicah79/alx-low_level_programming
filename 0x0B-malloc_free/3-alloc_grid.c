#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: value of width
 * @height: value of height
 * Return: pointer to 2-dimension array
 */
int **alloc_grid(int width, int height)
{
	int **mem;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mem = malloc(sizeof(int *) * height);

	if (mem == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		mem[x] = malloc(sizeof(int) * width);

		if (mem[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mem[x]);

			free(mem);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			mem[x][y] = 0;
	}

	return (mem);
}
