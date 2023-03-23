#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
*/

void more_numbers(void)
{
	int i, j, num;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			num = i;
			if (num > 9)
			{
				_putchar(1 + '0');
				num = i % 10;
			}
			_putchar(num + '0');
		}
	_putchar('\n');
	}
}
