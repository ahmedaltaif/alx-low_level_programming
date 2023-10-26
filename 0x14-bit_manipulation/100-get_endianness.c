#include "main.h"
/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int a;
	unsigned int x;

	x = (int) (((char *) &a)[0]);

	return (x);
}
