#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: -1 If value is not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int center, i = 0, left = 0, right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");

		i = left;

		while (i <= right)
		{
			if (i == right)
			{
				printf("%i\n", array[i]);
			}
			else
			{
				printf("%i, ", array[i]);
			}
			i++;
		}
		center = left + (right - left) / 2;
		if (array[center] == value)
			return (center);
		if (array[center] < value)
			left = center + 1;
		else
			right = center - 1;
	}
	return (-1);
}
