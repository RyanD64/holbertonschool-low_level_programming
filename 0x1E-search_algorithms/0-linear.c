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
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array [%ld] = [%d]\n", i, value);
			return (i);
		}
		else
		{
			printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}
