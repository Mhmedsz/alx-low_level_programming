#include "main.h"

/**
 *print_numbers - prints the numbers, from 0 to 9
 *
 * Return: Always 0.
*/
void print_numbers(void)
{
	char c[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
