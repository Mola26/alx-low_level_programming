#include "main.h"

/**
 *_strncpy - function that copies a string
 *
 * @src: input value
 * @destr: input value
 * @n: input value
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *destr, char *src, int n)
{
int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(destr + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(destr + i) = '\0';
	}
	return (destr);
}
