#include<stdio.h>

/**
 * main - print hexadecimal
 * Return: 0 otherwise 1
 */

int main(void)
{
int numbers = '0', letters = 'f';

while (numbers <= 9)
{
putchar(numbers);
numbers++;
}
while (letters <= 'f')
{
putchar(letters);
letters++;
}
putchar('\n');
return (0);

}
