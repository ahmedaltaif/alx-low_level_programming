#include "main.h"
/**
 * *_memcpy - function that copies memory area.
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: intger
 *
 * Return: (dest).
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
