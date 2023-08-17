#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: intger
 * Return: Always 0.
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		if ((c >= 97) && (c <= 122))
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}

}
