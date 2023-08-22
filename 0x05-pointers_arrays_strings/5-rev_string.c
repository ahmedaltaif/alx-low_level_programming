#include "main.h"

/**
* rev_string - function that reverses a string.
*
*
* @s: string
*
*/

void rev_string(char *s)
{
	int a;
	int c = 0;
	int b = 0;
	char str;


	while (s[c] != '\0')
	{
		c++;
	}

	b = c - 1;

	for (a = 0; a < c / 2; a++)
	{
		str = s[a];
		s[a] = s[b];
		s[b--] = str;
	}

}
