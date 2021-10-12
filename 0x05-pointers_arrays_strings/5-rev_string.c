#include"main.h"

/**
 * rev_string - print string in reverse
 *@s: random number
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char len;

	while (s[i++])
		j++;

	for (i = j - 1; i >= j / 2; i--)
	{
		len = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = len;
	}
}
