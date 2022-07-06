#include<stdio.h>
#include<stdlib.h>
#include<libgen.h>

/**
 * main - prints executable file name
 * @argc: n arguments
 * @argv: args
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	char *exe_name = basename(argv[0]);

	printf("%s\n", exe_name);
	return (EXIT_SUCCESS);
}
