#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98, followed by a new line.
 * 
 * Return: Integer value
 */

void print_to_98(int n)
{
    int c;
    if (n > 98)
    {
	    for (c = n; c >= 98; c--)
	    {
		    _putchar(c);
		    _putchar(',');
		    _putchar(' ');
	    }
    }
    
    if (n < 08)
    {
	    for (c = n; c <= 98; c++)
	    {
	
		    _putchar(c);
		    _putchar(',');
		    _putchar(' ');
	    }
    }
}
