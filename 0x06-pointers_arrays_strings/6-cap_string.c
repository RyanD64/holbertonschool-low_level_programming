#include"main.h"

/**
  *
  *
  */

char *cap_string(char *s)
{
int a, b;
char separateur[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};

a = 1;
while (s[a] != '\0')
{
	if(a == 0 && s[a] >= 'a' && s[a] <= 'z')
	{
		s[a] = s[a] - 32;
	}
	for (b = 0; separateur[b] != '\0'; b++)
	{
	if ((s[a - 1] == separateur[b]) && (s[a] >= 'a' && s[a] <= 'z'))
		{
		s[a] = s[a] - 32;
		}
	}
a++;
}
return (s);
}
