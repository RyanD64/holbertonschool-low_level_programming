#include"main.h"

/**
  *main - rint the largest prime number
  *Return: 0
  */

int main(void)
{
long int a = 612852475143;
long int pf = 2;
int b = 0;

while (a > 1)
{
	while (a % pf == 0)
	{
		b = pf;
		a = a / pf;
	}
	pf++;
}
printf("%d\n", b);
return (0);
}
