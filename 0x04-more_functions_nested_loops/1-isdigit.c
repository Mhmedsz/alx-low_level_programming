#include "main.h"

/**
 * _isdigit - check if input is digit
 *
 * @c: input for alphabet
 *
 * Return: 1 if its uppercase, 0 is not
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
