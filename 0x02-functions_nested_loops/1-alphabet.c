#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 * Description: program that prints lowercase alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{
	putchar('a');
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
