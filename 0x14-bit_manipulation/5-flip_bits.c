/**
 * flip_bits - function that returns the number of bits
 * @m: second number
 *
 * @n: first number
 * Return: number bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			num++;

		n >>= 1;
		m >>= 1;
	}
	return (num);
}
