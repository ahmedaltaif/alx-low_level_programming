#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: int
 * Return: value
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square -  returns the natural square root of a number.
 * @b: int
 * @c: int
 * Return: value
 */
int square(int b, int c)
{
	if (c * c == b)
	{
		return (c);
	} else if (c * c > b)
	{
		return (-1);
	}
	return (square(b, c + 1));
}
