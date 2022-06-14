#include "main.h"

/**
 * _puts - puts
 *
 * return: Always 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[1] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
