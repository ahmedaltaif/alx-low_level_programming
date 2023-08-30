#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int a;

	if (*s != ('\0'))
		a = 1 + _strlen_recursion(s + 1);
	return (a);

}
