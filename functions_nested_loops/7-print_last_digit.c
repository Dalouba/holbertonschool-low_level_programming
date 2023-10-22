#include "main.h"

/**
 * print_last_digit - check for a integer
 * @r: The character to be checked
 * Return: Returns the value about the last digit
 */
int print_last_digit(int r)
{
	int a;

	a = abs(r);
	a = r % 10;
	a = abs(a);
	_putchar (a + '0');

	return (a);
}
