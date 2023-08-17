#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: intger
 * Return: Always 0.
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		if ((c >= 'a') && (c <= 'z'))
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}

}
