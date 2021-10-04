#include<stdio.h>

/**
 * main - print numbers one variable
 * Return: 0 else 1
 */

int main(void)
{
int numbers = '0';

while (numbers <= '9')
{
putchar(numbers);
numbers++;
}
putchar('\n');
return (0);

}
