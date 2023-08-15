#include "main.h"

/**
* print_last_digit - print last digit
*
* @d: is intered value
*
* Return: Always 0
*/

int print_last_digit(int d)
{
	int c;
	c = d % 10; 

	if (c < 0)
	{
		c = c * -1
	}
	_putchar(c + '0');

	return (c);
}
