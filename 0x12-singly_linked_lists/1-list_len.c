#include "lists.h"
/**
 * list_len - a function that returns the number of elements .
 * @h: pointer
 * Return: number of elements in a linked
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h != NULL)
			h = h->next;
		i++;
	}
	return (i);
}
