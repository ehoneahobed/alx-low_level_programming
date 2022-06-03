#include <stdio.h>

/**
 * main - main block
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
 */

int main(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	
	char C = 'A';
	
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	
	putchar('\n');
	return (0);
}
