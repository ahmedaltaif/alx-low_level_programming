#include <math.h>
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: num
 * @index: from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int num;

	if (index > 63)
	{

		return (-1);
	}

	num = 1 << index;

	*n = *n & (~num);

	return (1);
}
