#include "main.h"

/**
* reverse_array - reverses the content of an array of integers.
*
* @a: array
* @n: number
*
*/
void reverse_array(int *a, int n)
{
	int i;
	int c;

	for (c = n - 1; c >= n / 2; c--)
	{
		i = a[n - 1 - c];
		a[n - 1 - c] = a[c];
		a[c] = i;
	}
}
