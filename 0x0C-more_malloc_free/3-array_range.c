#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that concatenates two strings.
 * @min: int
 * @max: int
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int a;
	int c;

	a = max - min;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * (a + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (c = 0; min <= max; c++)
	{
		p[c] = min++;
	}

	return (p);
}
