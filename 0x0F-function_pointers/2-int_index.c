#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: array
 * @size: array size
 * @cmp: function pointer
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	int a;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) == 1)
		{
			return (a);
		}
	}
	return (-1);
}
