#include "main.h"

/**
* *cap_string -  unction that capitalizes all words of a string.
*
* @str: array
*
* Return: a
*/
char *leet(char *str)
{
	char *a = str;
	char b[] = { 'a', 'e', 'o', 't', 'l' };
	char c[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == b[i] || *str == a[i] - 32)
			{
				*str = c[i] + '0';
			}
		}
		str++;
	}
	return (a);
}
