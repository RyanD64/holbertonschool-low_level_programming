#include"lists.h"

/**
  *add_nodeint - add a node at the beginning of a listed chain
  *@n: random number
  *@head: random number
  *Return: head otherwise NULL
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *begin;
begin = malloc(sizeof(listint_t));

if (begin == NULL)
{
	return (NULL);
}
begin->n = n;
begin->next = *head;
*head = begin;
return (*head);
}
