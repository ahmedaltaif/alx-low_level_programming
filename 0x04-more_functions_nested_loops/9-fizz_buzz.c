#include <stdio.h>

/**
 * print_square - function that prints a square, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100 ; i++)
	{
		if (i % 3 == 0)
		{
			pritf("Fizz");
		}
		else if (i % 5 == 0)
		{
			pritf("Buzz");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			pritf("FizzBuzz");
		}
		else
		{
			printf(i);
		}
		_putchar('\n');
	}
}
