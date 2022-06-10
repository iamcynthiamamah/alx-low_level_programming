#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always returns 0 (success)
 */

int main(void)
{
	int n;

	for (n = 48; n < 57; n++)
	{
		putchar(n);
		putchar(44);
		putchar(32);
	}
	putchar(57,'\n');
	return (0);
}
