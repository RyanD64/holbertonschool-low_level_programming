#include"main.h"

/**
  * create_array - create an arrray of strings with malloc
  * @size: size of the variable
  * @c: random character
  * Return: b otherwise NULL
  */

char *create_array(unsigned int size, char c)
{
char *b = NULL;
unsigned int n = 0;

if (size == 0)
{
	return (NULL);
}

b = malloc((sizeof(unsigned int)) * (size));

for (n = 0; n < size; n++)
{
b[n] = c;
}
return (b);
}
