#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 *
 * @head: Pointer
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head->next != NULL)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
