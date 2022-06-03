#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that assigns a random number to a variable each time it is executed
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX/2;

	if (n==0)
		printf("%d is zeo\n", n);
	else if (n<0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
