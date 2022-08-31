#include "search_algos.h"

/**
 * interpolation_search - search for a value using the interpol search algoritm
 * @array: array of integers
 * @size: size of the array
 * @value: value to search
 * Return: i otherwise -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = (size - 1);
	size_t m;

	if (array == NULL)
		return (-1);

	while (size)
	{
		m = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (m >= size)
		{
			break;
		}

		printf("Value checked array[%ld] = [%d]\n", m, value);
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}

	if (value == array[l])
	{
		printf("Found [%d] at index: [%d]\n", value, l);
		return (l);
	}
	else
	{
		printf("Value checked array[%ld] is out of range\n", (size_t)m);
		return (-1);
	}
}
