#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: first number
 * Return: number bits
 * @m: second number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned int A = 0;

		while (n != 0 || m != 0)
		{

			if ((n & 1) != (m & 1))
			{
				A++;
			}
			n >>= 1;
			m >>= 1;
		}

	return (A);
}
