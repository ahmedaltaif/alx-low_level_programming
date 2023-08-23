#include "main.h"
/**
* puts_half -  prints half of a string,
*
*
* @str: string
*
*/


void puts_half(char *str)
{

	int a = 0;
	int i;

	while (str[a] != '\0')
	{
		a++;
	}


	if ((a % 2) == 1)
	{
		for (i = ((a / 2) + 1); i < a; i++)
		{
		_putchar(str[i]);


		}

	}
	else
	{
		for ((i = ((a - 1) / 2)); i < a; i++)
		{
		_putchar(str[i]);


		}
	}
	_putchar('\n');

}