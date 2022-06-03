#include <stdio.h>

/**
 * main - print alphabet in lower and uppercase
 *Description: Program that prints alphabets in lowercases)?
 *
 * Return: (0) Success
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);

	}

	for (ch = 'A' ; ch <= 'Z' ; ch++)

	{

		putchar(ch);

	}

	putchar('\n');

	return (0);

}
