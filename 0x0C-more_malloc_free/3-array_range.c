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

	p = malloc(sizeof(int) * (a + 1));

	if (min > max)
	{
		return (NULL);
	}

	for (c = 0; c <= a ; c++)
	{
		p[c] = min++;
	}

	if (p == NULL)
		return (NULL);

	return (p);
}
