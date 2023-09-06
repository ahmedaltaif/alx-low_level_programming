#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: size of the array
 * @height: character
 * Return: pointer to array, or NULL
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int x;
	int y;

	s = malloc(sizeof(int) * height);

	if (width <= 0 || height <= 0 || s == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		s[x] = (int *)malloc(sizeof(int) * width);
		if (s[x] == NULL)
		{
			for (x-- ; x >= 0; x--)
			{
				free(s[x]);
			}
			free(s);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			s[x][y] = 0;

	return (s);
}
