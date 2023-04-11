#include "main.h"

/**
 * int flip_bits - returns the number of bits one needs to flip to get another
 * @n: name of the list
 * @m: long int
 *
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int calc = n ^ m;
	unsigned int total = 0;

	while (calc != 0)
	{
		total += total & 1;
		total >>= 1;
	}
	return (total);
}

