#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 *main - Entry point
 *
 *Return: always return 0 (successful)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	elseif(n == 0)
	{
		printf("%d is zero", n);
	}
	else
		printf("%d is negative", n);

	return (0);
}