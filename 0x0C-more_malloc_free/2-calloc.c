#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function that allocates memory for an array.
 * @nmemb: string 2
 * @size: string 2
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
