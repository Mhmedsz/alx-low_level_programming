#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description: prints a message that depends on
 * last digit of the random number generated
 * Return: Always 0 Success
*/

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar (i + '0');
			putchar (j + '0');
			if (i != 8 || j != 9)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
