#include "lists.h"

/**
 *print_dlistint - print all elements of a dlistint
 *@h: head
 *Return: count otherwise 0
 */

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *tmp = h;
int count = 0;
	if (tmp == NULL)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
return (count);
}
