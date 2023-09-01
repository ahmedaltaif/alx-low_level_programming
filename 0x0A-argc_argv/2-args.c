#include <stdio.h>
/**
 * main - Entry point
 * @argc: num of arg
 * @argv: array of arg
 *
 * Return:always 1 (success))
*/


int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
