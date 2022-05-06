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

/**
 *insert_dnodeint_at_index - insert a node at a given position
 * @h: head of the node
 * @idx: index given
 * @n: node value
 * Return: new otherwise NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int length = dlistint_len(*h);
	dlistint_t *new;
	unsigned int count = 0;
	dlistint_t *tmp = (*h);

	if (idx > length)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == length)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = 0;
	new->prev = 0;

	if (*h != NULL)
	{
		while (count < idx)
		{
			tmp = tmp->next;
			count++;
		}

		tmp->prev->next = new;
		new->prev = tmp->prev;
		new->next = tmp;
		tmp->prev = new;
	}
	return (new);
}
