#include <stdio.h>
#include "main.h"

/**
 * main - prints lowercase alphabets
 * Description: program that prints lowercase alphabets
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	letter = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
