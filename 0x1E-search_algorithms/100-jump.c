#include "search_algos.h"

/**
 * jump_search - searches for a value using the jump search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: value to search
 * Return: i otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size), start = 0;
	size_t i, end = jump;

	if (array == NULL || size == 0)
		return (-1);

	while (value > array[end] && end < size)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[end] == value)
		{
			return (end);
			break;
		}
		start = end;
		end += jump;
	}

	printf("Value checked array[%d] = [%d]\n", start, array[start]);
	printf("Value found between indexes [%d] and [%ld]\n", start, end);

	for (i = start; i < size && i <= end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
