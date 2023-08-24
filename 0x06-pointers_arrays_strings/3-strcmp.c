#include "main.h"
/**
* _strcmp - function that compares two strings.
*
* @s1: string
* @s2: string
*
* Return: compares result
*/

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int i = 0;
	int c;

	while (*(s1 + a) != '\0')
	{
		a++;
	}
	while (*(s2 + i) != '\0')
	{
		i++;
	}
	if (a == i)
	{
		return (0);
	}
	else
	{
		c = a - i;
		return (c);
	}



}
