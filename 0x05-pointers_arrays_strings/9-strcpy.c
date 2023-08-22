#include "main.h"

/**
* *_strcpy - opies the string pointed to by src
*
*
* @src: char
* @dest: char
*
* Description: opies the string pointed to by src.
*/
char *_strcpy(char *dest, char *src)
{
	int b;
	int a = 0;

	while (src[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';

	return (dest);

}
