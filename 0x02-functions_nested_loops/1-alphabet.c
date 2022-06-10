#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * main - Entry point
 *
 * Return: always return 0 (success)
 */

void print_alphabet(void);

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

int main(void)
{
	 print_alphabet();
	return (0);
}

