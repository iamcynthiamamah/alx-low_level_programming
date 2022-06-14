#include "main.h"

/**
 * _puts - puts
 *
 * return: Always 0
 */

void _puts(char *str)
{
	int i;

	while (str[1])
	{
		_puts(str[i]);
		i++;
	}

	_puts('\n');
}
