#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabets
 */
void print_alphabet_x10(void)
{
	int x, j;

	for (x = 0; x <= 9; x++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
