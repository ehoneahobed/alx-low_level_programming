#include "main.h"

/**
* print_number - prints an integer using _putchar
* @n: integer to be printed
*/

void print_number(int n)
{
	unsigned int num;

	/* print - infront of negative numbers */
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	/* print the digits infront of the current digit */
	if (num / 10)
		print_number(num / 10);

	/* print current digit */
	_putchar((num % 10) + '0');
}
