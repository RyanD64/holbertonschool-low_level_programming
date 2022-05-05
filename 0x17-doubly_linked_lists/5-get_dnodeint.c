#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t
 * @head: head of the list
 * @index: position of the index on the list
 * Return: head otherwise 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int tic = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (tic == index)
		{
			break;
		}
			tic++;
			head = head->next;
	}
	return (head);
}
