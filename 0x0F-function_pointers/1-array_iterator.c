#include"function_pointers.h"

/**
  * array_iterator - execute a function on each element of an array
  * @array: random number
  * @size: random value
  * @action: function pre-defined
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t a = 0;
	while (a < size)
	{
	action(array[a]);
	a++;
	}
}
