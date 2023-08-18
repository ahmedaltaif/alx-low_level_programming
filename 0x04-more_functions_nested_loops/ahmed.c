#include <stdio.h>

/**
 * more_numbers -  prints the numbers, from 0 to 9
 *
 * Return: Always 0.
 */

void main(void)
{
	int a;
	int i;

	for (i = '1'; i <= '10'; i++)
	{
		for (a = '0'; a <= '14'; a++)
		{
			if (a >= 10)
			_putchar('1');
			_putchar(a % 10 + '0');
		}
	_putchar('\n');
	}

}