#include"main.h"

/**
 * _strcmp - comparing two strings
 * @s1: random print
 * @s2: random print
 * Return: flag otherwise 0
 */


int _strcmp(char *s1, char *s2)
{
int flag = 0, i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
flag = s1[i] - s2[i];
break;
}
i++;
}
if (flag == 0)
return (0);
else
return (flag);
}
