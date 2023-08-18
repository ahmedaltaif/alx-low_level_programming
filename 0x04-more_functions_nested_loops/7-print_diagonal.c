#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: intger
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i;
	int a;

	if (n <= 0)
		_putchar('\n');
	for (i = 1; i > n; i++)
	{
		for (a = 0; a < i; a++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
