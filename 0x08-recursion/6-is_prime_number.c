#include "main.h"
#include <stdio.h>

/**
 * is_divisible - checks if a number is divisible
 * @num: dividend
 * @div: divisor
 * Return: Always integer
 */

int is_divisible(int num, int div);

int is_prime_number(int n);

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (num > (div / 2))
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - checks if a number is a prime
 * @n: number to be checked
 * Return: Always integer value.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
