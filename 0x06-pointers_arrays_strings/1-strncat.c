#include "main.h"

/**
* *_strncat - concatenates two strings n bytes from src.
*
* @dest: string
* @src: string
* @n: number of bytes
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int c = 0;


	while (*(dest + a) != '\0')
	{
		a++;
	}

	for (c = 0; c < n; c++)
	{
		if (*(src + c) == '\0')
		{
			break;
		}

		dest[a] = src[c];
		a++;

	}

	return (dest);
}
