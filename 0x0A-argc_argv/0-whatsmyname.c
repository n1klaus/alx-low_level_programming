#include "main.h"
/**
 * main - prints the program's name (first argument in argv),
 * followed by a new line
 *
 * @argc: arguments count
 * @argv: arguments vector array of strings
 * Return: nothing
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
