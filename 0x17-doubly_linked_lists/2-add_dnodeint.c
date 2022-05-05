#include "lists.h"

/**
 *add_dnodeint - add a new node at the end of a dlistint
 *@head: head of the list
 *@n: data of a node
 *Return: new otherwise NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->prev = NULL;
	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->n = n;
		new->prev = NULL;
		new->next = (*head);
		(*head)->prev = new;
		*head = new->next;
		*head = new;
	}
return (new);
}

