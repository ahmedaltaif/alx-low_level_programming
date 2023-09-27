#include "lists.h"
/**
* listint_len - returns the number of elements
*
* @h: pointer
*
* Return: the number of elements
*/

size_t listint_len(const listint_t *h)
{
	int numofli = 0;

	if (h == NULL)
		return (0);

	/*count the numper of elements*/
	while (h)
	{
		numofli++;
		h = h->next;
	}
	return (numofli);
}
