#include "main.h"

/**
 * main - check the code
 *
 * Return: always return 0 (success)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

int main(void)
{
	 print_alphabet();
	return (0);
}

