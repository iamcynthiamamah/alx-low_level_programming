#include "main.h"

/**
 * main - Entry point
 *
 * Return: always return 0 (success)
 */

int main(void)
{
	char ch = 'a';
	char print_alphabet_x10;

	for (print_alphabet_x10 = ch; print_alphabet_x10 <= 10; print_alphabet_x10++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar(print_alphabet_x10);
	}
		return (0);
}
