#include <stdio.h>
#include <unistd.h>
/**
 * main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 * print out a string without using the printf and the puts functions
 *
 * Return: 1
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",60);
	return (1);
}
