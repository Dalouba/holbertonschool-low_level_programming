#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("5 %d is greather %d", n, n % 10);
	else if(n % 10 == 0)
		printf("0 %d is 0 %d", n, n % 10);
	else
		printf("6 %d and is less than 6 and not 0 %d", n, n % 10);
	return (0);
}
