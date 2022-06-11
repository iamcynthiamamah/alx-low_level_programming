
#include "main.h"
 /**
 * main - Entry point
 * 
 * print_alphabet - This is a description
 * Return: void
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


