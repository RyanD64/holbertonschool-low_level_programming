#include "search_algos.h"

/**
 * linear_search -  searches for a value using the Linear search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: value to search
 * Return: i otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
			return (-1);

	while (i < size)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
				return (i);
		}
		i++;
	}
	return (-1);
}
