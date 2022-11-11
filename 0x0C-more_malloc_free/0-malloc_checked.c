#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p_bm;

	p_bm = malloc(b);
	if (p_bm == NULL)
		exit(98);
	return (p_bm);
}
