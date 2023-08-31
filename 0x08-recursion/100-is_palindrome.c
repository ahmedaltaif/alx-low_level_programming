#include "main.h"
/**
 * length - string lingth.
 * @s: string
 * Return: value
 */

int length(char *s)
{
	if (*s)
	{
		return (length(s + 1) + 1);
	}
	return (0);
}

/**
 * palindrome - check if palindrome
 * @a: string
 * @l: string
 * Return: value
 */
int palindrome(char *a, int l)
{
	if (l <= 1)
	{
		return (1);
	}
	else if (a[0] != a[l - 1])
	{
		return (0);
	}
	else
	{
		return (palindrome((a + 1), (l - 2)));
	}
}
/**
 * is_palindrome - check if palindrome
 * @s: string
 * Return: value
 */
int is_palindrome(char *s)
{
	int c;

	c = length(s);
	if (c <= 1)
	{
		return (1);
	}
	return (palindrome(s, c));
}
