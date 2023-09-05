#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars.
 * @size: size of the array
 * @c: character
 * Return: pointer to array, or NULL
 */

char *create_array(unsigned int size, char c)
{

	char *s;
	unsigned int i = 0;

	s = malloc(sizeof(c) * size);

	if (size == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		s[i] = c;
	}
	return (s);

}
