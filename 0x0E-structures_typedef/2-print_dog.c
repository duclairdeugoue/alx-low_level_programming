#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the data of the dog structure
 * @d: struct dog to output
 * Return: 0 if everything is okay
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf(
		"Name: %s\n"
		"Age: %.6f\n"
		"Owner: %s\n",
		d->name, d->age, d->owner
	);

}
