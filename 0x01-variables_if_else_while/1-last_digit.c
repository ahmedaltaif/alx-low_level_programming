#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - printf the last digit
 *
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
    int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    m = n % 10;
    if (n > 5)
    {
        printf("Last digit of %d is %c and is greater than 5\n", n, m);
    }
    if (n == 5)
    {
        printf("Last digit of %d is %c and is 0\n", n, m);
    }
    if (n != 0, n < 6)
    {
        printf("Last digit of %d is %c and is less than 6 and not 0\n", n, m);
    }


	return (0);
}