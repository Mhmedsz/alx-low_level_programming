#include "main.h"

/**
 * print_alphabet_x10 - utilizes on the _putchar function to print alphabet 10 times
*/
void print_alphabet(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar (letters[i]);
		}
	putchar ('\n');
	}
}

