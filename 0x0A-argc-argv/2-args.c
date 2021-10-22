#include<stdio.h>
#include<stdlib.h>

/**
  * main - print the name of every argument passing by
  * @argc: random value
  * @argv: random character
  * Return: 0 otherwise 1
  */

int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
