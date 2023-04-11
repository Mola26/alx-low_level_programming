#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @index: index starting from 0
 * @n: pointer to the number
 *
 * Return: 1 or -1 if there is a error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >
	return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
