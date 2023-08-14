#include <stdio.h>

/**
* main - print all possible numprs
*
* Return: Always 0
*/


int main(void)
{

	int a;

	for (a = '0' ; a <= '9' ; a++)
	{
		putchar(a);
		if (a == 9)
			continue;
		/**
		*	putchar(',');
		*	putchar(' ');
		*/
	}
	putchar('\n');
	return (0);
}
