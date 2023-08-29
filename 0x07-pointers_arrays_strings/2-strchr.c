#include "main.h"
/**
 * *_strchr - a function that locates a character in a string.
 * @s: string
 * @c: char to find
 *
 *
 * Return: (s + a).
 */


char *_strchr(char *s, char c)

{

	for (; s[0] != '\0'; s++)
	{
		if (s[0] == c)
			return (s);
		else if (s[1] == c)
			return (s + 1);

	}
	return (s + 1);
}
