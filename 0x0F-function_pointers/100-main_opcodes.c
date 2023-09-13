#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - program that prints the opcodes
 * @a: address
 * @n: bytes num
 * Return: void
 */
void print_opcodes(char *a, int n)
{
int c;

for (c = 0; c < n; c++)
{
	printf("%.2hhx", a[c]);
	if (c < n - 1)
	{
		printf(" ");
	}
}
printf("\n");

}

/**
 * main - prints the opcodes
 * @argc: argument
 * @argv: argument
 * Return: O
 */
int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, i);
	return (0);
}
