#include "main.h"

/**
* swap_int - to swap int valu
*
*
* @a: intger
* @b: intger
*/
void swap_int(int *a, int *b)
{
	int aa = *a;
	int bb = *b;

	*a = bb;
	*b = aa;
}
