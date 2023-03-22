#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
*/
int main(void)
{
	int i, f1 = 0, f2 = 1, sum;

	for (i = 1; i < 50; i++)
	{
		if (i == 1)
			printf("%d", f1);
		else if (i == 2)
			printf("%d", f2);

		sum = f1 + f2;
		f1 = f2;
		f2 = sum;

		printf("%d", sum);
	}
	return (0);
}
