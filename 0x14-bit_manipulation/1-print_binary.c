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
	unsigned long int calc = 1UL << ((sizeof(unsigned long int) * 8 - 1);

		while (calc > 0)
			{
		_putchar((n & calc) ? '1' : '0';
		calc >>= 1;
			}
}
