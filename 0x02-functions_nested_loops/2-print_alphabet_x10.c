#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *           the alphabet a - z
*/
void print_alphabet(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (j = 0; j < 9; j++)
	{
		for (i = 0; i < 26; i++)
		_putchar(letters[i]);
	putchar ('\n');
	}
}

