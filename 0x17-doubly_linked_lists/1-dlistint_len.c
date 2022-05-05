#include "lists.h"

/**
 *dlistint_len - print the length of a dlistint
 *@h: head
 *Return: count otherwise 0
 */

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *tmp = h;
int count = 0;
	if (tmp == NULL)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
return (count);
}
