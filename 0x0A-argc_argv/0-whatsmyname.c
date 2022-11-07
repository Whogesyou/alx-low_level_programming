#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: pointers of pionters containing strings
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);

}
