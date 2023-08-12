#include <stdio.h>

/**
* main - prit alphabet low upper
*
* Return: Always 0
*/


int main(void)
{

	char hn;
	char hm;

	for (hn = 'a' ; hn <= 'z' ; hn++)
	{
		putchar(hn);
	}
	for (hm = 'A' ; hm <= 'Z' ; hm++)
	{
		putchar(hm);
	}
	putchar('\n');
	return (0);
}
