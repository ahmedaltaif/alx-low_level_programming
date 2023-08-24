#include "main.h"
/**
* *_strncpy - concatenates two strings n bytes from src.
*
* @dest: string
* @src: string
* @n: number of bytes
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int i = 0;

	while (*(src + a) != '\0')
	{
		if (i == n)
			break;
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);


}
