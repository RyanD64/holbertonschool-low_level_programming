#include"main.h"

/**
  * create_array - create an arrray of strings with malloc
  * @size: size of the variable
  * @c: random character
  * Return: b otherwise 0
  */

char *create_array(unsigned int size, char c)
{
char *b = NULL;
unsigned int n = 0;

b = malloc((sizeof(unsigned int)) * (size));

for (n = 0; n < size; n++)
{
b[n] = c;
}
return (b);
}
