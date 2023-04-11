#include "main.h"

/**
 *set_bit - value of a bit to 1
 *@index: index starting from 0
 *@n: pointer to n
 *
 * Return: 1 is worked or -1 if there is a error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
