#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: 0 if everything is okay else an interger different from 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet ++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
