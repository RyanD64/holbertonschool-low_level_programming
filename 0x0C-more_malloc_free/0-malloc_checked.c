#include"main.h"

/**
  * *malloc_checked - allocate memory using malloc
  * @b: random value
  * Return: v otherwise 98
  */

void *malloc_checked(unsigned int b)
{
void *v = NULL;
v = malloc(b);

if (v == NULL)
{
free(v);
exit(98);
}

return (v);
}
