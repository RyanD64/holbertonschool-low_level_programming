#include "lists.h"

/**
 *add_dnodeint - add a new node at the end of a dlistint
 *@head: head of the list
 *@n: data of a node
 *Return: new otherwise NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = NULL;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	if (*head != NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = (*head);
		(*head)->prev = new;
		*head = new->next;
		*head = new;
	}
	else
	{
		*head = new;
	}
return (new);
}

