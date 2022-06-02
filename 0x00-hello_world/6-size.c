#include <stdio.h>

/**
 * main - void enables the code to run successfully
 (*
 * Description: prints sizes of various programs on machine)?
 * Return: 0
 */
int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of a char: %zu byte(s)\n" , (unsigned int)sizeof(acharacter));
	printf("Size of an int: %zu byte(s)\n" , (unsigned int)sizeof(ainteger));
	printf("Size of a long int: %zu byte(s)\n" , (unsigned long)sizeof(along));
	printf("Size of a long long int: %zu byte(s)" , (unsigned long)sizeof(alonglong));
	printf("Size of a float: %zu byte(s)" , (unsigned int)sizeof(afloat));
	return (0);
}

