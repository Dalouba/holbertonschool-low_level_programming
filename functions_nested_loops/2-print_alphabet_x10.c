#include "main.h"
/**
 * print_alpahbet_x10 - Prints 10 times the alphabet, in lowcase.
 *
 *
 */

void print_alphabet_x10(void)
{
	int i;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 97; i <= 122; i++)
		{

			_putchar(i);
		}
			_putchar('\n');
	}
}


