#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num[] = "0123456789abcdef";

	int i;

	for (i = 0; i < 16; i++)
	{
		putchar (num[i]);
	}
	putchar('\n');
	return (0);
}
