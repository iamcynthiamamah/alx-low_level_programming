#include "main.h"

/**
 * main - Entry point
 *
 * Return: always return 0 (success)
 */

int main(void)
{
	char ch[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
