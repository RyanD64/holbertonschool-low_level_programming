#include "lists.h"

/**
  * get_dnodeint_at_index - get the nth node of a double list
  * @head: random number
  * @index: random number
  * Return: head othervise NULL
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			break;
		}
		count++;
		head = head->next;
	}
	return (head);
}
