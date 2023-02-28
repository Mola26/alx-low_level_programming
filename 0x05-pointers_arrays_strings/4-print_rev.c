#include "main.h"

/**
 *print_rev -  string, in reverse, followed by a new line
 *@s: char to print
 * Return:
 */
void print_rev(char *s)
{
	int i, a;

	a = 0;
	while (s[a] != '\0')
		a++;

	for (i = a - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
