#include "main.h"

/**
* print_rev - prints a string, in reverse.
*
*
* @s: char print the length
*
*/
void print_rev(char *s)
{
	int a = 0;
	int b;
	int c;

	while (*s != '\0')
	{
		a++;
		for (b = ca - 1; b >= 0; b--)
		{
		_putchar(s[b]);
		}
	}
	_putchar('\n');
}
