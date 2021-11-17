#include"lists.h"

/**
  *listint_len - return the elements in a linked listint_t list.
  *@h: random number
  *Return: temp otherwise 0
  */

size_t listint_len(const listint_t *h)
{
const listint_t *temp = h;
size_t i;
if (temp == NULL)
{
return (0);
}

for (i = 0; temp != NULL; i++)
{
temp = temp->next;
}
return (i);
}
