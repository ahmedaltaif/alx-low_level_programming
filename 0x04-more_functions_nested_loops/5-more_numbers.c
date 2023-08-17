#include "main.h"

/**
 * more_numbers -  prints the numbers, from 0 to 9
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int a;
	int i;

	for (i = '1'; i <= '10'; i++)
	{
		for (a = '0'; a <= '14'; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}

}
