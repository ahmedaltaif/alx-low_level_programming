/**
 * flip_bits - function that returns the number of bits
 * @m: second number
 * @n: first number
 * Return: number bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int b = 0;
	unsigned int a;
	
	a = n ^ m;

	while (a)
	{
		b += a & 1;

		a >>= 1;
	}

	return (b);
}
