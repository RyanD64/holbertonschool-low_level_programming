#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a given location
 * @head: head of the node
 * @index: position in the function
 *Return: 1 otherwise -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = *head;

	if (*head != NULL)
	{
		while (index > count)
		{
			temp = temp->next;
			count++;
			if (temp == NULL)
			{
				return (-1);
			}
		}

		if (temp->prev != NULL)
		{
			temp->prev->next = temp->next;
		}
		else
		{
			*head = (*head)->next;
		}

		if (temp->next != NULL)
		{
			temp->next->prev = temp->prev;
		}
		free(temp);
		return (1);
	}
	return (-1);
}
