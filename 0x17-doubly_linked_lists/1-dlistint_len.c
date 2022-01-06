#include "lists.h"

/**
  * dlistint_len - return the number of elements
  * @h: random integer
  * Return: 0 otherwise 1
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
