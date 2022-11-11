#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j, len_of_s1, len_of_s2;

	i = 0, j = 0;
	len_of_s1 = 0;
	len_of_s2 = 0;

	while (s1 && s1[len_of_s1])
		len_of_s1++;

	while (s2 && s2[len_of_s2])
		len_of_s2++;

	if (n >= len_of_s2)
		s3 = malloc(sizeof(char) * (len_of_s1 + len_of_s2 + 1));
	else
		s3 = malloc(sizeof(char) * (len_of_s1 + n + 1));

	if (!s3)
		return (NULL);

	while (i < len_of_s1)
	{
		s3[i] = s1[i];
		i++;
	}

	while (n < len_of_s2 && i < (len_of_s1 + n))
		s3[i++] = s2[j++];

	while (n >= len_of_s2 && i < (len_of_s1 + len_of_s2))
		s3[i++] = s2[j++];

	s3[i] = '\0';

	return (s3);
}
