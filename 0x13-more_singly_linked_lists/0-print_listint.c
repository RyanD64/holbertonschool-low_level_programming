#include"lists.h"

/**
   *
     *
      *
       *
        * 
	 */

size_t print_listint(const listint_t *h)
{
int dumb = 0;
if (h == NULL)
{
	return(0);
}
while(h != NULL)
{
printf("%d\n", h -> n);
dumb++;
h = h -> next;
}
return(dumb);
}
