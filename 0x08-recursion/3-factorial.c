#include "main.h"
/**
 * factorial - function that returns the length of a string
 * @n: intger
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
