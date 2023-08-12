#include <stdio.h>

/**
* main - prit rev alphabet
*
* Return: Always 0
*/


int main(void)
{

	char hn;

	for (hn = 'z' ; hn >= 'a' ; hn--)
	{
		putchar(hn);
	}
	putchar('\n');
	return (0);
}
