#include "main.h"
#include <stdio.h>

/**
 * main -  prime factor of 612852475143
 * 
 * Return: always 0
 */

int main(void)
{
	long a = 612852475143;
	int i;
	for (i = (int) sqrt(a); i > 2; i++)
	{
		if (a % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	return (0);
}