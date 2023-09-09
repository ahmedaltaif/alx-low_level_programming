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
	p = malloc(size * nmemb);

	if (nmemb == 0 || size  == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	while (i <= (nmemb * size))
	{
		p[i] = 0;
		i++;
	}
	return (p);

}
