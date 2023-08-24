#include "main.h"

/**
* *_strcat - function that concatenates two strings.
*
* @dest: string
* @src: string
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int c = 0;
	int d = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}
	while (*(src + c) != '\0')
	{
		c++;
	}

	for (d = 0; d <= c; d++)
	{
		dest[a] = src[c];
	}

	return (dest);
}
