#include"lists.h"

/**
  *add_nodeint_end - add a node at tthe end of a linked list
  *@head: random number
  *@n: random value
  *Return: *head otherwise NULL
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *begin;
listint_t *temp;
begin = malloc(sizeof(listint_t));

if (begin == NULL)
{
	return (NULL);
}
begin->n = n;
begin->next = NULL;

if (*head == NULL)
{
	*head = begin;
}
else
{
temp = *head;
	while (temp != NULL && temp->next != NULL)
	{
		temp = temp->next;
	}
temp->next = begin;
}
return (*head);
}
