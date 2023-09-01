#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: the size of the memory to print
 * @accept: intger
 *
 * Return: (dest).
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int c = 0;

	for (a = 0; s[a] != '\0' ; s++)
	{
		if (s[a] == ' ')
		{
			break;
		}
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
			}
		}


	}
	return (c);
}
