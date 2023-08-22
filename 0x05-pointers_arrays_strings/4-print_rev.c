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

	while (*s != '\0')
	{
		a++;
		for (b = c - 1; b >= 0; b--)
		{
		_putchar(s[b]);
		}
	}
	_putchar('\n');
}