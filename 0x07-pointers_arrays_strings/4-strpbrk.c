	#include "main.h"
	/**
	* *_strpbrk -  function that searches a string for any of a set of bytes.
	* @s:  string
	* @accept:  string
	*
	* Return: (0).
	*/
	char *_strpbrk(char *s, char *accept)
	{
		int a = 0;
		int b = 0;

		for (a = 0; s[a] != '\0' ; s++)
		{
			for (b = 0; accept[b]; b++)
			{
				if (*s == accept[b])
				{
					return (s);
				}
			}

		}
		return (0);
	}
