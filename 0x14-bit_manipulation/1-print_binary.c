#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation
 * @n: name of the list
 *
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned int d;
	
	for (d = 1 << 21; d > 0; d = d / 2)

	       d = >> n;

	if (d & 1)
	{
		printf("1");
		d++;
	}

	else if (d)
		printf("0");
}
		if( !d)
			printf("0")'
}
