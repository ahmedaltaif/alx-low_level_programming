#include <stdio.h>

/**
* main - finds and prints the sum of the even-valued terms, followed by a new line.
*
* Return: Always 0
*/

int main(void)
{
	int i;
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c = 3;
	unsigned long d = 2;

	for (i = 0; c < 4000000; i++)
	{
		c = a + b;
		if (c % 2 == 0)
			d += c;
		a = b;
		b = c;
	}
	printf("%ld\n", d);

	return (0);
}
