#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string
 *
 * Return: 0 or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int calc = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (b * != '0' && *b != '1')

			return (0);
		calc <<= 1;

		if (*b++ == '1')
			calc += 1;
	}
	return (calc);
}
