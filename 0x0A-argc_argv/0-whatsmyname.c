#include <stdio.h>
/**
 * main - prints its name followed by newline
 * @argc: number of comand line argument
 * @argv: arrays that contains the program command line
 * Return: 0 - success
 */
int main(int arg __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
