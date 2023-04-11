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

	for (int d = 0; b[d] != '\0'; d++)
	{
		if (b[d] == '0')
		{
			calc = result << 1;
		}
		else if (b[d] == '1')
		{
			calc = (calc << 1) | 1;
		} else

		{
			return (0);
		}
	}
	return (calc);
}
