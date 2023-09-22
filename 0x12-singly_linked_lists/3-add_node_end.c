#include "lists.h"
/**
* add_node_end - function that adds a new node
* @str: string
* @head: pointer
* Return: the address of the new element.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end = *head;
	list_t *newnode = malloc(sizeof(list_t));
	int r = 0;

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->next = NULL;
	newnode->str = strdup(str);
	if (newnode->str)
	{
		for (r = 0; str[r] != '\0'; r++)
			;
	}
	newnode->len = r;
	if (end)
	{
		while (end->next)
		{
			end = end->next;
		}
		end->next = newnode;
	}
	else
	{
		*head = newnode;
	}
	return (newnode);
}
