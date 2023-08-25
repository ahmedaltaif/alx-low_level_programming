#include "main.h"

/**
* *cap_string -  unction that capitalizes all words of a string.
*
* @str: array
*
* Return: str
*/
char *cap_string(char *str)
{

   {
	int c, b;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	c = 0;
	while (*(str + c) != '\0')
	{
		if (*(str + c) >= 'a' && *(str + c) <= 'z')
		{
			if (c == 0)
			{
				*(str + c) = *(str + c) - 32;
			}
			else
			{
				for (b = 0; b <= 12; b++)
				{
					if (a[b] == *(str + c - 1))
					{
						*(str + c) = *(str + c) - 32;
					}
				}
			}
		}
		c++;
	}

	return (str);
}