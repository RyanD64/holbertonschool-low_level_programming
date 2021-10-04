#include<stdio.h>

/**
 * main - print number combination
 * Return: 0 otherwise 1
 */

int main(void)
{
int number = '0';

while (number <= '9')
{
putchar(number);
putchar(',');
putchar(' ');
number++;
}
putchar('\n');
return (0);
}
