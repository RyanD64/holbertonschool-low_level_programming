#include "lists.h"

/**
  * sum_dlistint - return the sum of all nodes
  * @head: head of node
  * Return: res otherwise NULL
  *
  */

int sum_dlistint(dlistint_t *head)
{
	size_t res = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
