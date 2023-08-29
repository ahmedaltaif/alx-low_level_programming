#include "main.h"
/**
 * *_strchr - function that copies memory area.
 * @s: string
 * @c: char to find
 *
 *
 * Return: (dest).
 */


char *_strchr(char *s, char c)

{
	char a;


	for (a = 0; *(s + a) != '\0'; a++)
	{
		if (*(s + a) == c)

			break;

	}
	return ((s + a));



}
