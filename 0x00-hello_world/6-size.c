#include <stdio.h>

/**
 * main - void enables the code to run successfully
 *
 *
 * Description: prints sizes of various types of programs on machine)?
 * Return: 0
 */
int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of char: %lu byte(s)\n" , sizeof(acharacter));
	printf("Size of int: %lu byte(s)\n" , sizeof(ainteger));
	printf("Size of long: %lu byte(s)\n" , sizeof(along));
	printf("Size of long long: %lu byte(s)" , sizeof(alonglong));
	printf("Size of float: %lu byte(s)" , sizeof(afloat));
	return (0);
}

