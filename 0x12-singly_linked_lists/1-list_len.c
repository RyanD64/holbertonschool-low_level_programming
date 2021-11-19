#include"lists.h"

/**
  *list_len - return the elements of a linked list
  *@h: random value
  *Return: i otherwise 0
  */

size_t list_len(const list_t *h)
{
const list_t *temp = h;
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
