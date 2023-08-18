#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: intger
 * Return: Always 0.
 */

void print_square(int size)
{
	int i;
	int a;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (a = 0; a <= size; a++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
