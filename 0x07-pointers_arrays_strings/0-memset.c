#include "main.h"
/**
 * *_memset -a function that fills memory with a constant byte.
 *
 * @b: the address of memory to print
 * @s: the size of the memory to print
 *
 * Return: (s).
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}
	return (s);
}
