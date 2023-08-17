#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: intger
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);
	else
		return (1);

}
