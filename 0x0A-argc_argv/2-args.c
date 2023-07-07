#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: number of command line arguments
 * @argv: arrays that contain the program command argument
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
