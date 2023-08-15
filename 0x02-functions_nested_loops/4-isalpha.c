#include "main.h"

/**
* _islower - print lowercase char
*
* @c: is intered value
*
* Return: Always 0
*/

int _isalpha(int c)
{

	if (c >= 65 && c <= 122)
	{
        if (c >= 66 && c <= 96)
        {
		    return (0);
            
        }
        else 
        {
            return (1);
        }
	}
    return (0);
}
