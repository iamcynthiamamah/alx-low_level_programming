#include "main.h"

/**
 * main - Entry point
 *
 * Return: always return 0 (success)
 */

int main(void)
{
	char ch = 'a';
	char print_alphabet;

	for (print_alphabet = ch; print_alphabet <= 10; print_alphabet++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar(print_alphabet);
	}
		return (0);
}
