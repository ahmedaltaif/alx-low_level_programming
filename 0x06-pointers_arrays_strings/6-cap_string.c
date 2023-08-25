#include "main.h"

/**
* *cap_string -  capitalizes all words of a string.
*
* @s: array
*
* Return: s
*/
char *cap_string(char *s)
{
	int a;


	a = 0;
while (s[a] != '\0')
{
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	if (s[a] == ' ' || s[a] == '\t' || s[a] == '\n'
		|| s[a] == ',' || s[a] == ';' || s[a] == '.'
		|| s[a] == '.' || s[a] == '!' || s[a] == '?'
		|| s[a] == '"' || s[a] == '(' || s[a] == ')'
		|| s[a] == '{' || s[a] == '}')
	{
	if (s[a + 1] >= 'a' && s[a + 1] <= 'z')
	{
		s[a + 1] = s[a + 1] - 32;
	}
	}
	a++;
	}
return (s);

}
