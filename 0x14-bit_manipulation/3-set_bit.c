#include "main.h"
/**
 * set_bit - function sets value of a bit to 1 at a given index
 *
 * @index: starting from 0 of the bit you want to set.
 *
 * @n: number.
 *
 * Return: 1 if it worked, or -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int num;

	if (index > 63)
	{
		return (-1);
	}

	num = 1 << index;
	*n = *n | num;

	return (1);
}
