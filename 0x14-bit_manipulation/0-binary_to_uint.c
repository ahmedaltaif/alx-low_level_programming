#include "main.h"
/**
 * binary_to_uint - function that converts a binary to unsigned int.
 * @b: string of 0 and 1 chars.
 * Return: converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int numun = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		numun = numun << 1;

		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		else if (*b == '1')
		{
			numun = numun | 1;
		}

		b++;
	}
	return (numun);
}
