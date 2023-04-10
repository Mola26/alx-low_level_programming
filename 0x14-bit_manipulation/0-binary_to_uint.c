#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string
 *
 * Return: 0 or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int j = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	while (b[j] != '\0')
	{
		if (b[j] == '0')
			i <<= 1;
		else if (b[i] == '1')
			i = (i << 1) | 1;
		else
			return (0);
		j++;
	}
	return (j);
}
