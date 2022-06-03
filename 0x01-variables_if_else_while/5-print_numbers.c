#include <stdio.h>

/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 * Return: 0
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}

	printf("\n");
	return (0);
}
