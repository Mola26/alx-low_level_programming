#include "main.h"
/**
<<<<<<< HEAD
 ** print_number - prints an integer
 ** @n: integer to print
 ** Return: void
 **/
=======
 * print_number - prints an integer
 * @n: integer to print
 * Return: void
 */
>>>>>>> 3e8d988d255df672d937ba32eb754a56549890cb

void print_number(int n)
{
	unsigned int num;
<<<<<<< HEAD
	if (n < 0)
	{

	_putchar('-');
		num ==-n;
	}
	else
=======

	if (n < 0)
	{
		_putchar('-');
		num = -n;

	}
	else

>>>>>>> 3e8d988d255df672d937ba32eb754a56549890cb
	{
		num = n;
	}

	if (num / 10)
	{
<<<<<<< HEAD

	print_number(num / 10);
	}
        	_putchar(num % 10 + '0');
=======
		print_number(num / 10);
	}

	_putchar(num % 10 + '0');
>>>>>>> 3e8d988d255df672d937ba32eb754a56549890cb
}
