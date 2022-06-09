#include <stdio.h>

/**
 * main - prints 1 to 100 and Fizz Buzz
 * Description: program that prints Fizz Buzz in between 1 to 100
 * @void: no argument
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; ++i)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("Buzz\n");
	return (0);
}
