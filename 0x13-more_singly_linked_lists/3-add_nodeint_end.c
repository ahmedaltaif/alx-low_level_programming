#include "lists.h"
/**
 * add_nodeint_end - unction that adds a new node at the end.
 * @head: pointer.
 * @n: data
 * Return: the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newptr;
	listint_t *temphead = *head;

	newptr = malloc(sizeof(listint_t));
	if (newptr == NULL)
		return (NULL);
	newptr->n = n;
	newptr->next = NULL;
	if (*head == NULL)
	{
		*head = newptr;
		return (newptr);
	}
	while (temphead->next)
	{
		temphead = temphead->next;
	}
	temphead->next = newptr;
	return (newptr);

}
