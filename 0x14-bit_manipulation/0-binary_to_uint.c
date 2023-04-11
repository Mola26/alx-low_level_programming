#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string
 *
 * Return: 0 or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;
	int len;
	if (b == NULL)
		return (0);
	
	len = strlen(b);
	
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
		{
			num = num << 1;
		}
		else if (b[i] == '1')
		{
			num = (num << 1) | 1;
		}
		else
	}
	return (0);

}
}
return (num);
}
