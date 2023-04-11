#include "main.h"

/**
 * print_binary - prints the binary representation
 * @n: name of the list
 *
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	std:: cout << (n & 1);
}
