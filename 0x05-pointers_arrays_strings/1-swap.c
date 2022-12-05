#include "main.h"

/**
 * swap_int - swap the value of 2 integers
 * @a: pointer of first integer
 * @b: pointer of second integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
