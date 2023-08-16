#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98, followed by a new line.
 * 
 * Return: Integer value
 */

void print_to_98(int n)
{
	for (n >= 98; n--)
	{
		n--;
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	for (n <= 98; n++)
	{
		n++;
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
}
