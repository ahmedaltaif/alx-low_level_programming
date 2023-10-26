#include "main.h"

/**
 * binary_to_uint - function that converts a binary to unsigned int.
 *
 * @b: string .
 *
 * Return: converted number .
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int unsi = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		unsi = unsi << 1;

			if (*b != '1' && *b != '0')
			{
				return (0);
			} else if (*b == '1')
			{
				unsi = unsi | 1;
			}

		b++;
	}

	return (unsi);
}
