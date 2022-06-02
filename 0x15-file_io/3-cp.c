#include "main.h"
/**
 * print_error - prints error messages.
 * @src: file to copy from.
 * @dest: file to copy to.
 * @argv: arguments vector.
 *
 * Return: nothing.
 */
void print_error(int src, int dest, char *argv[])
{
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int src, dest, on_close;
	ssize_t len, written;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp src dest");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	print_error(src, dest, argv);

	len = 1024;
	while (len == 1024)
	{
		len = read(src, buf, 1024);
		if (len == -1)
			print_error(-1, 0, argv);
		written = write(dest, buf, len);
		if (written == -1)
			print_error(0, -1, argv);
	}

	on_close = close(src);
	if (on_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}

	on_close = close(dest);
	if (on_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
	return (0);
}
