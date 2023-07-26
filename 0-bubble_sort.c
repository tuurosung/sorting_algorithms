#include "sort.h"
/**
 * swap_ints - Function to swap two integers
 * @a: the first integer to swap
 * @b: the second integer to swap
*/
void swap_ints(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}

/**
 * bubble_sort - Function to sort an array of integers
 * @array: the array to sort
 * @size: The size of the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}

