#include "lists.h"

/**
 *add_dnodeint_end - add a new node at the end of a dlistint
 *@head: head of the list
 *@n: data of a node
 *Return: new otherwise NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *tmp = *head;
new = malloc(sizeof(dlistint_t));
	if (head == NULL)
		return (NULL);

	if (new == NULL)
	{
		return (NULL);
	}

	new->next = NULL;
	new->n = n;
	tmp = (*head);

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
