#include <stdio.h>

/**
 * main - printing putchar
 * Description: program that prints putchar
 *
 * Return: 0
 */
int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		putchar(text[i]);
	}
	putchar('\n');

	return (0);
}
