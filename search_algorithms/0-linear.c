#include "search_algos.h"
/**
 * linear_search - searchs a value in an array using linear
 * @arr: array
 * @val: value to search
 * @size: size of array
 *
 * Return: index of the value searched or -1 if failed
 */
int linear_search(int *arr, size_t size, int val)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, arr[i]);
		if (arr[i] == val)
		{
			return (i);
		}
	}
	return (-1);
}
