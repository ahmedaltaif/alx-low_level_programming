#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 *
 * @head: Pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *newptr;

	while (*head)
	{
		if (head == NULL)
		{
			return;
		}
		newptr = (*head)->next;
		free(*head);
		*head = newptr;
	}
	*head = NULL;
}
