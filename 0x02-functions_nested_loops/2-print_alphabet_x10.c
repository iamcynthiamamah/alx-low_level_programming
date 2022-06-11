#include "main.h"

/**
 * main - Entry point
 *
 * Return: always return 0 (success)
 */

int main(void)
{
	char ch = 'a';
	char alphabet;

	for (alphabet = ch; alphabet <= 10; alphabet++)
	{
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		_putchar(alphabet);
	}
		return (0);
}
