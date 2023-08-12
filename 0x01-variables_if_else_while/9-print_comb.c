#include <stdio.h>

/**
* main - print all possible numprs
*
* Return: Always 0
*/


int main(void)
{

	int a;

	for (a = '0' ; a <= '10' ; a++)
	{
		putchar(a);
        if (a != 10)
        putchar(',');
        putchar(' ');
	}
	putchar('\n');
	return (0);
}
