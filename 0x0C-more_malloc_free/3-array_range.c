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

	a = max - min;

	p = malloc(sizeof(int) * (a + 1));

	if (min > max)
	{
		return (NULL);
	}

	
	while (max > min)
	{
		p[a] = max;
		a--;
		max--;
	} 

	if (p == NULL)
		return (NULL);
	p[a] = min;
	
	return (p);
}
