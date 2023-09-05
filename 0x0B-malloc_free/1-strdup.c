#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - newly allocated space in memory.
 * @str: size of the array
 * Return:  returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *s;
	int a = 0;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + a) != '\0')
	{
		a++;
	}

	s = malloc(sizeof(*str));

	for (i = 0; i <= a; i++)
	{
		s[i] = str[i];
	}
	return (s);

}
