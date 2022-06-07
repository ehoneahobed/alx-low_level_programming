#include "main.h"
#include <stdio.h>


void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if(n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if(n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	printf("\n");
}
