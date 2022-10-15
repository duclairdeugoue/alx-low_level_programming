#include <stdio.h>

/**
 * prints all single digit numbers of base 10
 * followed by a new line
 * Return: 0 if everything is okay or not 0 else
 */
int main(void)
{
	int n;
	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
