#include "main.h"

/**
 * clear_bit - function sets value of a bit to 0 at a given index.
 * @index: from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 * @n: num
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int a;

	if (index > 63)
		return (-1);


	a = (1 << index);

	*n = (*n & (~a));

	return (1);
}
