#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 *
 * @index: starting from 0 of the bit you want to get
 *
 * @n: search num
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
	{

		return (-1);

	}

	return ((n >> index) & 1);
}
