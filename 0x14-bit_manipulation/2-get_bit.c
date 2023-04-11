#include "main.h"

/**
 * get_bit - function that returns value of a bit
 * @index: is the index
 * @n: name of the binary
 *
 * Return: index or -1 is there is a error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}
