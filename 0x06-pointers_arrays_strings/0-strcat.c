#include"main.h"

/**
 * _strcat - concetenate two strings
 * @destr: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *destr, char *src)
{
	char *s = destr;

	while (*destr != '\0')
	{
		destr++;
	}

	while (*src != '\0')
	{
		*destr = *src;
		destr++;
		src++;
	}
	*destr = '\0';
	return (s);
}
