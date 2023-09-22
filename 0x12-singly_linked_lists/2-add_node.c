#include "lists.h"
/**
  * add_node - function that adds a new node
  * @str: strig to be add
  * @head: first address
  * Return: Return: the address of the new element
  *
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnod;
	int l = 0, loop = 0;
	char *nowcont;

	newnod = *head;
	if (str == NULL || head == NULL)
		return (NULL);
	while (str[l] != '\0')
	{
		l++;
	}
	nowcont = malloc((l + 1) * sizeof(char));
	if (nowcont == NULL)
		return (NULL);
	while (str[loop])
	{
		nowcont[loop] = str[loop];
		loop++;
	}
	newnod = malloc(sizeof(list_t));
	if (newnod == NULL)
	{
		free(nowcont);
		return (NULL);
	}
	newnod->str = nowcont;
	newnod->len = l;
	newnod->next = *head;
	*head = newnod;
	return (newnod);
}
