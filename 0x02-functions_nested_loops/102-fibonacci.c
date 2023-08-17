#include <stdio.h>

/**
* main - prints the first 50 Fibonacci numbers, starting with 1 and 2
* 
* Return: Always 0
*/

int main(void)
{
    int i;
	int a = 0;
	int b = 1;
	int c;

	for (i = 1; i <= 50; i++)
		{	
			
    		c = a + b; 
			printf ('%lu', c);
			a = b;
			b = c;
			if (i == 49)
			{
				printf('\n');
            }
            else 
            {
                printf (', ');
            }


	    } 

	return (0);

}

