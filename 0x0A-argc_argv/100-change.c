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
	int all, cn;

	cn = atoi(argv[1]);

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	for (all = 0; cn > 0; all++)
	{
		if (cn - 25 >= 0)
		{
			cn = cn - 25;
		}
		if (cn - 10 >= 0)
		{
			cn = cn - 10;
		}
		if (cn - 5 >= 0)
		{
			cn = cn - 5;
		}
		if (cn - 2 >= 0)
		{
			cn = cn - 2;
		}

		if (cn - 1 >= 0)
		{
			cn = cn - 1;
		}

	}
	printf("%d\n", all);
	return (0);
}