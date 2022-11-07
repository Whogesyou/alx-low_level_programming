#include <stdio.h>
/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: one dimensional array of strings passed
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0
; count < argc; count++)
	{
		printf("%s\n"
, argv[count]);
	}
	return (0);
}
