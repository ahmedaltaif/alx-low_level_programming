#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: intger
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int i;
	int a;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{

		for (a = i; a < size; a++)
		{
			_putchar(' ');
		}
		for (a = 1; a <= i; a++)
		{
			_putchar('#');
		}
	}
}
