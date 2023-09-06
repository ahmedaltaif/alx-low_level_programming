#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - function that concatenates two strings.
 * @s1: string1
 * @s2: string2
 * Return: newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}

	s = (char *)malloc((a + b + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (c = 0; s1[c] != '\0'; c++)
	{
		s[c] = s1[c];
	}
	for (; s2[d] != '\0'; c++)
	{
		s[c] = s2[d];
		d++;
	}
	return (s);
}
