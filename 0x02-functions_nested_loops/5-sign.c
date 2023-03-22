#include "main.h"

/**
 * print_sign - print + if n is greater than zero
 *              prints 0 if n is zero
 *              prints - if n is less than zero
 *
 * @n: takes integer type
 * Return: 1 if +, 0 if 0, -1 if -
*/
int print_sign(int n)
{
	if (n > 0)
	{
		putchar (43);
		return (1);
	}
	else if (n == 0)
	{
		putchar (48);
		return (0);
	}
	else
	{
		putchar(45);
		return (-1);
	}
	return (0);
}
