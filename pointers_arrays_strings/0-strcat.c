#include "main.h"
#include <stdio.h>

/**
 * strcat - function that concatenates two strings
 * @dest: pointer
 *@src: pointer 2
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int i = 0
	int j = 0

		while (dest[i] != '\0')
		{
			i++;
		}

		while (src[j] != '\0')
		{
			(dest[i + j] = src[j]
			j++;
		}

		dest i + j = '\0';

}
