#include "lists.h"

/**
  * delete_dnodeint_at_index - delete a node at an index
  * @head: double pointer
  * @index: random number
  * Return: 1 otherwise 0
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = NULL;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	while (temp->next != NULL)
	{
		if (count == index)
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}