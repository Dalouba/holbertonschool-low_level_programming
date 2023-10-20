#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Write a function that check for alphabetic character
 * @c: The character to be checked
 * Return: 1 if character is lowercase or uppercase or 0 for anything else
 */

int _isalpha(int c)

{
	if (c <= 'a' && c >= 'z')
	{
		return (1);
	}
	if (c <= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
