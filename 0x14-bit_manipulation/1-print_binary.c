#include "main.h"

/**
 * print_binary - prints the binary representation
 * @n: name of the list
 *
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int d, count = 0;
	unsigned long int crnt;

	for (d = 63; d >= 0; d--)
	{
		crnt = n >> d;

		if (crnt & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
