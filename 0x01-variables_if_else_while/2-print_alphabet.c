#include <stdio.h>

/**
 *main - program that prints lowercase alphabets
 *Description: code that prints lowercase alphabets using putchar)?
 *
 *Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
