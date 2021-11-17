#include"lists.h"

/**
  *print_listint - print all the elements into a listint
  *@h: random value
  *Return: dumb otherwise 0
  *
  *
*/

size_t print_listint(const listint_t *h)
{
int dumb = 0;
if (h == NULL)
{
	return (0);
}
while (h != NULL)
{
printf("%d\n", h->n);
dumb++;
h = h->next;
}
return (dumb);
}
