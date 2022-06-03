#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible different combinations of 3 digits.
 * Numbers must be separated by commas and a space.
 * The 3 digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination.
 * print only the smallest combination of 3 digits.
 * Numbers should be printed in ascending order.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` up to 6 times.
 * You are not allowed to use any variables of type `char`.
 * Return: 0
 */

int main(void)
{
	int x, y, z;

	for (x = 48; x < 58; x++)
	{
		for (y = 49; y < 58; y++)
		{
			for (z = 50; z < 58; z++)
			{
				if (y > x && z > y)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != 55 || y != 56 || z != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
