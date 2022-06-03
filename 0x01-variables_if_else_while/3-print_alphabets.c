#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints the alphabets in lowercases
 *
 * Return: 0
 */
int main(void)
{
	char alphabets;
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	
return (0);
}
