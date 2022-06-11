#include "main.h"

/**
 * print_alphabet_x10 - Check code
 *
 * Return: always return 0 (success)
 */

void print_alphabet_x10(void)
{
	int print_alphabet_x10 = 1;

	char ch;

	while (print_alphabet_x10 <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		putchar('\n');
		print_alphabet_x10++;
	}
}

