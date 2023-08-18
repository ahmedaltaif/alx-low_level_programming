#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: intger
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i;

	for (i = 1; i > n; i++)
		_putchar('\\');
	_putchar('\n');
}
