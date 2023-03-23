#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
*/

void more_numbers(void)
{
	char c[] = "01234567891011121314";
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(c[i]);
		}
	_putchar('\n');
	}
}
