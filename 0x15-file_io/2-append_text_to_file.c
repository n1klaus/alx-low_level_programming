#include "main.h"
/**
  * append_text_to_file - appends text at the end of a file
  * @filename: name of the file
  * @text_content: a NULL terminated string to add at end ofthe file
  *
  * Return: 1 on success; -1 on failure if file cannot be created,
  * file cannot be written, write fails, etc
  */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t i, openf, written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	openf = open(filename, O_WRONLY | O_APPEND);
	if (openf == -1)
		return (-1);

	i = 0;
	while (*(text_content + i) != '\0')
		i++;
	written = write(openf, text_content, i);
	if (written == -1)
		return (-1);

	close(openf);
	return (1);
}
