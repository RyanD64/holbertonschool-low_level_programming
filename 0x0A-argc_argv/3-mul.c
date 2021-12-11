#include<stdio.h>
#include<stdlib.h>

/**
  * main - print the number of passed arguments
  * @argc: random number
  * @argv: random character
  * Return: 0 otherwise 1
  */

int main(int argc, char *argv[])
{
int x, y, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
x = atoi(argv[1]);
y = atoi(argv[2]);
result = x *y;
}
printf("%d\n", result);
return (0);
}
