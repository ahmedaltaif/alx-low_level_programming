#include "main.h"

/**
* _puts - prints a string
*
*
* @str: char print the length
*
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');

}
