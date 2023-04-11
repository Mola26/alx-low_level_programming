#include "main.h"

/**
 * flip_bits - returns the number of bits one needs to flip to get another
 * @n: name of the first num
 * @m: name of the second num
 *
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int calc = n ^ m;
	unsigned long int total;
	int d, current = 0;

	for (d = 63; d >= 0; d--)
	{
		total = calc >> d;
		if (total & 1)
			current++;
	}

	return (current);
}

