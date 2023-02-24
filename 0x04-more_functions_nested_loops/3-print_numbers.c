#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9
 *@n: Valid numbers to be checked
 * Return: 0.
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 9; n++)
	{
		putchar(n);
	}
	putchar(10);
