#include "main.h"
#include <stdlib.h>

/**
  * argstostr - concatenates all arguments in the program
  * @ac: int
  * @av: int
  * Return: pointer
  */
char *argstostr(int ac, char **av)
{
int i, j, k = 0, length = 0;
char *v;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++, length++)
for (j = 0; av[i][j]; length++)
j++;

v = (char *)malloc(sizeof(char) * length + 1);
if (v == NULL)
return (NULL);

for (i = 0; i < ac; i++, k++)
{
for (j = 0; av[i][j]; j++)
{
v[k] = av[i][j];
k++;
}
v[k] = '\n';
}
v[k] = '\0';
return (v);
}
