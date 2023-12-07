#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: Name for the file
 * @text_content: The content of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *textcontent)
{
	int fd;

	if (!filename)
		return (-1);
	if (access(filename, F_OK) == 0)
		fd = open(filename, O_WRONLY | O_APPEND);

	else
		fd = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (!textcontent)
		return (1);
	if (write(fd, textcontent, strlen(textcontent)) == -1)
		return (-1);
	close(fd);

	return (1);
}
