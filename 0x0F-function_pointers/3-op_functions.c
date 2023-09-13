#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - program that performs simple operations.
 * @array: array
 * @size: size of array
 * @action : pointer to function
 * Return: void
 */

int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	return (a / b);
}
int op_mod(int a, int b)
{
	return (a % b);
}