#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char x[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(x[i]);
	}
	putchar ('\n');
	return (0);
}
