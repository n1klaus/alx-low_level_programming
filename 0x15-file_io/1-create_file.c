#include "main.h"
/**
  * create_file - creates a file
  * @filename: name of the file to create
  * @text_content: a NULL terminated string to write to the file
  *
  * Return: 1 on success; -1 on failure if file cannot be created,
  * file cannot be written, write fails, etc
  */
int create_file(const char *filename, char *text_content)
{
	ssize_t i, openf, written;
	char *buf = malloc(sizeof(char) * strlen(text_content));

	if (buf == NULL)
		return (-1);

	if (filename == NULL)
		return (-1);

	openf = open(filename, O_TRUNC | O_CREAT);
	if (openf == -1)
		return (-1);

	i = 0;
	while ( *(text_content + i) != '\0')
		written = write(openf, buf, *(text_content + i));
	if (written == -1)
		return (-1);

	close(openf);
	free(buf);
	return (written);
}
