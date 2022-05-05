#include "lists.h"

/**
 *sum_dlistint - return the sum of all data of a dlistint list
 * @head: head of the list
 * Return: tic otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int tic = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		tic += head->n;
		head = head->next;
	}
	return (tic);
}
