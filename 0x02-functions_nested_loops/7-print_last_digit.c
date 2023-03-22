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
	int last_digit;

	if (n < 0)
	{
		last_digit = (-1) * (n % 10);
	}
	else
		last_digit = n % 10;
	_putchar (n + '0');
	return (n);
}
