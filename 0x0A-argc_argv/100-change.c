#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum # of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: array containing the arguments inputed
 * Return: 0 if everything is okay
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, num, min_coins;
	int coins[] = {25, 10, 5, 2, 1};

	min_coins = 0;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i <= 5; i++)
	{
		while (num >= coins[i])
		{
			min_coins++;
			num -= coins[i];
		}
	}

	printf("%d\n", min_coins);

	return (0);
}
