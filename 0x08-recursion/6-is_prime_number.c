#include "main.h"
/**
 * is_prime_number - returns 1 if a prime number, otherwise return 0.
 * @n: int
 * Return: value
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
	return (prime(n, 2));
	}
}

#include "main.h"
/**
 * prime - check for prime
 * @a: int
 * @b: int
 * Return: value
 */

int prime(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	if (a % b == 0)
	{
		return (0);
	}
	return (prime(a, b + 1));
}
