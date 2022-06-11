#include "main.h"

/**
 * print_sign - Checks code in lowercase
 * @n: basics
 * Return: Always 0
 */

int print_sign(int n)
{
	int print_sign(int n);

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
