#include "main"

/**
 * clear_bit - sets the value of a bit to 0
 * @index: index starting from 0
 * @n: name of the list
 * @m: name of the list
 *
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	unsigned long int sets = ~(1UL << index);
	*n &= sets;

	return (1);
}
