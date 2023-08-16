#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98, followed by a new line.
 * 
 * Return: Integer value
 */

void print_to_98(int n)
{
	int a;

	if (n == 98)
	{
		printf("98");
	}
	else if (n < 98)
	{
		for (a = n ; a <= 98 ; a++)
		{
			printf("%d", a);
			if (a < 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (a = n ; a >= 98 ; a--)
		{
			printf("%d", a);
			if (a > 98)
				printf(", ");

		}
	}
	printf("\n");
}

