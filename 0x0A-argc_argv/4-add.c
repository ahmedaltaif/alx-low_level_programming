#include <stdio.h>
#include <ctype.h>
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
	int a = 1;
	int b = 0;
	int sum = 0;
	char *arr;

	arr = argv[a];

	while (a < argc)
	{
		while (arr[b] != '\0')
		{
			if  (arr[b] < '0')
			{
				if (arr[b] > '9')
				{
					printf("Error\n");
				}
				return (1);
			}
			b++;
		}
		a++;
	}

	for (a = 1; a < argc; a++)
	{
		sum = sum + atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
