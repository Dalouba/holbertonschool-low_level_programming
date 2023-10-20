#include "main.h"

/**
 * _isalpha - Check for alphabetic character
 * @c: The character to be checked
 * Return: For alphabetic character , 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
