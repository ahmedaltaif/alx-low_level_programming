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
		_putchar('98');
	}
	else if (n < 98)
	{
		for (a = n ; a <= 98 ; a++)
		{
			_putchar("%d", a);
			if (a < 98)
                _putchar(", ");
		}
	}
	else if (n > 98)
	{
		for (a = n ; a >= 98 ; a--)
		{
			_putchar("%d", a);
			if (a > 98)
				_putchar(", ");

		}
	}
	_putchar("\n");
}

