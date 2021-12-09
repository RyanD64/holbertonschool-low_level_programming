#include<stdio.h>

/**
 * main - print number combination
 * Return: 0 otherwise 1
 */

int main(void)
{
int i = 48;

while (i < 58)
{
putchar(i);
i++;
if (i < 58)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
