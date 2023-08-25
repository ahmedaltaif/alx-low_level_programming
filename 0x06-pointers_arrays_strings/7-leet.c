#include "main.h"

/**
* *leet - function that encodes a string.
*
* @str: pointer
*
* Return: a
*/
char *leet(char *str)
{
	char *a = str;
	char c[] = { 4, 3, 0, 7, 1 };
	char b[] = { 'a', 'e', 'o', 't', 'l' };
	int i = 0;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == b[i]  || *str == b[i] - 32)
			{
				*str = c[i] + '0';
			}
		}
		str++;
	}
	return (a);
}
