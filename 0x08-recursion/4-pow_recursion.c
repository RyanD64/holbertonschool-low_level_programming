#include"main.h"

/**
  * _pow_recursion - print the x value raised by the power of y
  * @x: random value
  * @y: random value
  * Return: -1 otherwise 0
  */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
{
return ((y == 0) ? 1 : (x * _pow_recursion(x, y - 1)));
}
return (0);
}
