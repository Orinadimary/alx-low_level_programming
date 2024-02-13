#include "search_algos.h"

/**
 * interpolation_search - interpolation algorithm
 *
 * @array: array to search
 * @size: size of array
 * @value: target array value
 *
 * Return: index of the value in the array or (-1)
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0;
	size_t high = size - 1;
	double ratio;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (low <= high && value >= array[low] && value <= array[high])
	{
		ratio = (high - low) / (array[high] - array[low]);
		pos = low + (ratio * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%lu] is out of range\n", high);
	return (-1);
}
