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
    int d;

    if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (a = size - i; a >= 1; a--)
			{
				_putchar(' ');
			}
			for (d = 1; d <= i; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}