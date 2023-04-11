#include "main.h"

/**
 * print_binary - prints the binary representation
 * @n: name of the list
 *
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int calc = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int d;

	while (calc > 0)
	{
		if (n & calc)
			putchar('1');
		else
			putchar('0');
		calc >>= 1;
	}
}
