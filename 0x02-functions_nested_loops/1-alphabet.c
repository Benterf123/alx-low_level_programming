#include <stdio.h>

/**
 * main - printing alphabets
 * Description: program that prints lowercase alphabets
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n);

	return (0);
}
