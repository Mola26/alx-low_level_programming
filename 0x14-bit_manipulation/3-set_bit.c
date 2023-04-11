#include "main.h"
/**
 *set_bit - sets the value of a bit to 1
 *@index: index starting from 0
 *@n: pointer to n
 *
 * Return: 1 is worked or -1 if there is a error
 */

int set_bit(unsigned long int *n, unsigned int index);
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	unsigned long int calc = 1UL << index;
	*n | calc;
	return (1);
}
