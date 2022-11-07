#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: the vector that hold the arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
