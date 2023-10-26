#include "main.h"

/**
 * set_bit - function sets value of a bit to 1 at a given index
 * @n: number.
 *
 * Return: 1 if it worked, or -1 if an error
 *
 * @index: starting from 0 of the bit you want to set.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
		int value;

		if (index > 63)
			return (-1);


		value = 1 << index;

		*n = *n | value;

		return (1);

}
