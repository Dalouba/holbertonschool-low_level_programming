#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to be reserved
 */
void rev_string(char *s)
{
	int len = 0;

	int rev;
	int ver;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	for (ver = 0, rev = len - 1; ver < rev; ver++, rev--)
	{
		temp = s[ver];
		s[ver] = s[rev];
		s[rev] = temp;
	}
}
