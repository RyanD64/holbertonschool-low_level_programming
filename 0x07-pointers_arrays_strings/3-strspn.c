#include"main.h"

/**
  *
  *
  *
  */

unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int k = 0;
int count = 0;
for (i = 0; s[i] == '\0'; i++)
{ 
k = 0;
	for (j = 0; accept[j] =='\0'; j++)
	{
		if (s[i] == accept[j])
			{
			count++;
			k = 1;
			}
		else
		break;
	}
if (k == 0)
{
return (count);
}
}
return (0);
}
