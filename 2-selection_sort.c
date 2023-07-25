#include "sort.h"

/**
 * swap_ints - function that swap two integers in an array.
 * @a: The first integer
 * @b: The second integer
 */
void swap_ints(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}

/**
 * selection_sort - a function that sorts a list of integers
 * @array:  The list of integers
 * @size: The size of the array
 */

void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap_ints(array + i, min);
			print_array(array, size);
		}
	}
}
