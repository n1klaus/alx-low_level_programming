#include "main.h"
/**
  * read_textfile - reads a text file and prints it to
  * the POSIX standard output
  * @filename: name of the text file
  * @letters: number of letters it should read and print
  *
  * Return: the actual number of letters it could read and print;
  * return 0 if file cannot be opened, filename is NULL or
  * write fails or does not write the expected amount of bytes
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openf, readf, written;
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	openf = open(filename, O_RDONLY);
	if (openf != 0)
		return (0);

	readf = read(openf, buf, letters);
	if (readf != 0)
		return (0);

	written = write(1, buf, readf);
	if (written != 0)
		return (0);

	close(openf);
	free(buf);
	return (readf);
}
