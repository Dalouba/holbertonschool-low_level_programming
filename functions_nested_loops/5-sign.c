#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The character to be checked
 * Return: For return of sign of a number , 0 otherwise
 */

int print_sign(int n)
{
		if (n > 0)
		{
			_putchar (43);
			return (1);
		}
		else if (n == 0)
		{
			_putchar (48);
			return (0);
		}
		else
		{
			_putchar (45);
			return (-1);
		}
}
