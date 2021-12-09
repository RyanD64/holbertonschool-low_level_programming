#include<stdio.h>

/**
 * main - print hexadecimal
 * Return: 0 otherwise 1
 */

int main(void)
{
int i = 48;

while (i < 58)
{
	putchar(i);
	i++;
}

i = 97;

while (i < 103)
{
	putchar(i);
	i++;
}

putchar('\n');

return (0);
}
