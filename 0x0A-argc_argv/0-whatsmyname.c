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
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
