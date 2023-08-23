#include "main.h"
/**
 *
 * _atoi - convert a string to an integer.
 * @s:string
 * Return: converted string.
 *
 */
int _atoi(char *s)
{
	int i = 0;
	int m = 0;
	int sum = 0;
	int b = 0;
	m = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
        {
			    m *= -1;
        }
		if (s[i] >= '0' && s[i] <= '9')
		{
			    sum *= 10;
			    sum  -= (s[i] - '0');
			    b = 1;
		}
		else if (b == 1)
        {
			    break;
        }
		i++;
	}
	sum *= m;
	return (sum);
}