#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: num of arg
 * @argv: array of arg
 *
 * Return:always 1 (success))
*/


int main(int argc, char *argv[])
{
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	{
		res = atoi((argv[1])) * atoi((argv[2]));
		printf("%d\n", res);
	}
	return (0);
}
