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
	int i = 0;
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

	for (i = 0; i < a; i++)
	{
		_putchar(dest[i]);
	}
	for (d = 0; d < c; d++)
	{
		_putchar(src[d]);
	}

	_putchar('\0');
	return (dest);
}
