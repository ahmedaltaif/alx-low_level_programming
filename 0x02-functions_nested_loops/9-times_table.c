#include "main.h"

/**
 * times_table - prints table,
 *
 */
void times_table(void)
{
	int a;
	int h;
	int m;

	for (a = 0; a < 10; a++)
	{
		for (h = 0; h < 10; h++)
		{
			m = h * a;
			if (h == 0)
			{
				_putchar(m + '0');
			}

			if (m < 10 && h != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			} else if (m >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
