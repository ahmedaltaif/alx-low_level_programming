#include "main.h"

/**
* print_array - prints every other character of a string,
*
*
* @a: int
* @n: int
*
*/

void print_array(int *a, int n)
{
    int b;

    for (b = 0; b < n; b++)
	{
		printf("%d", *(a + b));
		if (b != (n - 1))
		printf(", ");
	}
	printf("\n");

}
