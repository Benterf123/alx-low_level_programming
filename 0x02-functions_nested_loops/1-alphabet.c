#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 * Description: putchar function that prints lowercase alphabets 
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');


}
