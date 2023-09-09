#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: string 2
 * @s2: string 2
 * @n: num of byte
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int numob = 0;
	unsigned int i = 0;

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n >= len2)
	{
		numob = len2;
		p = malloc((len1 + len2 + 1) * sizeof(char));
	} else
	{
		numob = n;
		p = malloc((len1 + n + 1) * sizeof(char));
	}

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (len1 + numob); i++)
	{
		if (i < len1)
			p[i] = s1[i];
		else
			p[i] = s2[i - len1];
	}


	return (p);

}
