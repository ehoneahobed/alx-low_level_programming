#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;

    /* considering 64 bits */
	if (index > 63)
		return (-1);

	result = (n >> index) & 1;

	return (result);
}