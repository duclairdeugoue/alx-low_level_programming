#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element for which
 * the cmp function does match and return 0 else, or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;
	int index_v, flag;

	if (size <= 0)
		return (-1);

	flag = 0;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			index_v = array[i];
			flag++;
		}
	}

	if (flag != 0)
		return (index_v);

	return (-1);
}
