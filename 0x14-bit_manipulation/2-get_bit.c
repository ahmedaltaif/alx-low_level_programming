#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * Return: value of the bit
 * @n: search num
 * @index: starting from 0 of the bit you want to get
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

		if (index >= 8 * sizeof(unsigned long int))
		{

			return (-1);

		}
	x = (n >> index) & 1;

	return (x);
}
