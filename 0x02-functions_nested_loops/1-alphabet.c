#include "main.h"

/**
 * main - prints lowercase alphabets
 * Description: program that prints lowercase alphabets
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');


}
