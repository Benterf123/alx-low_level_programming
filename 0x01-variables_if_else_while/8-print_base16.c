#include <stdio.h>

/**
 * main - printing all numbers of base 16
 * Description: program that prints all lowercase numbersin base 16)?
 *
 * Return: 0
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);

	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);
	
	putchar('\n');

	return (0);
}

