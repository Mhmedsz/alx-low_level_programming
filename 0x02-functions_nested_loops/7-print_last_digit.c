#include "main.h"

/**
 * print_last_digit - funtion to get the last digit of the number
 *
 * @n : takes in integer type input for function
 *
 * Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= (-1);
		n %= 10;
	}
	else
		n %= 10;
	_putchar (n + '0');
	return (n);
}
