#include"lists.h"

/**
  *free_listint2 - free a linked list listint_t
  *@head: random value
  */

void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL || *head == NULL)
return;

while (*head != NULL)
{
	temp = *head;
	(*head) = (*head)->next;
	free(temp);
}
head = NULL;
}
