#include <stdio.h>
#include "main.h"

/**
 * main - printing lowercase alphabets
 * Description: program that prints lowercase alphabets
 *
 * Return: 0
 */
int main(void)
{
	char a;
	a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
