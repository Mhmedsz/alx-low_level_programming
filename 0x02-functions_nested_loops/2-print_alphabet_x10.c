#include"main.h"

/**
 *print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/
void print_alphabet_x10(void)
{
	int letters[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar (letters[j]);
		}
		putchar ('\n');
	}

}
