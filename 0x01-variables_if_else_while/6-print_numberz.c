#include <stdio.h>

/**
 * main - printing single digits starting from 0
 * Description: a program that prints all single digits before 10)?
 *
 * Return: 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar(digit + '0');
	putchar('\n');

	return (0);
}

