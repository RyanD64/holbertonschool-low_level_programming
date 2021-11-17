#include"lists.h"

/**
  *free_listint - free a listed listint_t list
  *@head: random value
  *
  *
  */

void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
