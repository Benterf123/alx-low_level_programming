#include <stdio.h>



/**
 *main - Printing alphabets in lowercase
 *
 *Description: Programs that prints lowercase letters except e and q
 *
 *Return: 0
 *
 */

int main(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');

return (0);
}
