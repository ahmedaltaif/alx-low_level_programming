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
	while (*(str + 1) != '\0')
	{
		_putchar(str);
		str++;
	}

	_putchar('\n');

}
