#include <stdio.h>

/**
 * main - print fizzbuzz
 * Return: always 0
 */
int main(void)
{
	int i;

	printf("1");
	for (i = 2; i <= 100; i++)
	{
		print(" ");
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
	}
	print("\n");
	return (0);
}
