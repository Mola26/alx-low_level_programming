#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: input value
 * @destr: input value
 * @n: input value
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *destr, char *src, int n)
{
	int i, j;

	for (i = 0; destr[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		destr[i + j] = src[j];
	}
	destr[i + j] = '\0';
	return (destr);
}
