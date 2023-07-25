#include "sort.h"

/*swap_ints - Swap two integers  */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*Sort an array of  the integers in ascending order*/


void selection_sort(int *array, size_t size)
{
	int *min;
	size_t n, m;

	if (array == NULL || size < 2)
		return;

	for (n = 0; n < size - 1; n++)
	{
		min = array + n;
		for (m = n + 1; m < size; m++)
			min = (array[m] < *min) ? (array + m) : min;

		if ((array + n) != min)
		{
			swap_ints(array + n, min);
			print_array(array, size);
		}
	}
}
