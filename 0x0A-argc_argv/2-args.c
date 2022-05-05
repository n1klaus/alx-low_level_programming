#include "main.h"
/**
 * main - prints the function.
 *
 * @argc: arguments count
 * @argv: arguments vector array of strings
 * Return: O if successful
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
