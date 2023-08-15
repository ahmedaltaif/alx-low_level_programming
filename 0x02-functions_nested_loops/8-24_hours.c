#include "main.h"

/**
 * jack_bauer - prints every minute
 *
 */
 
void jack_bauer(void)
{
	int hu; 
    int mu;

	hu = 0;

	while (hu < 24)
	{
		mu = 0;
		while (mu < 60)
		{
			_putchar((hu / 10) + '0');
			_putchar((hu % 10) + '0');
			_putchar(':');
			_putchar((mu / 10) + '0');
			_putchar((mu % 10) + '0');
			_putchar('\n');
			mu++;
		}
		hu++;
	}
}