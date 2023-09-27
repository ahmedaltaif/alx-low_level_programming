#include "lists.h"
/**
* add_nodeint - adds a new node at the beginning of a listint_t
* @head: douple pointre
* @n:the data for the new node
* Return: the address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newpt;

	newpt = malloc(sizeof(listint_t));
	if (newpt == NULL)
	{
		return (0);
	}
	newpt->n = n;
	newpt->next = *head;
	*head = newpt;

	return (newpt);
}
