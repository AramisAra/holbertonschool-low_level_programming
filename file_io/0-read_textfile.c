#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: Name for the file to read
 * @letters: The Numbers of letters of that should be readed and printed
 * Return: The numbers of letters readed and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int wr, rd, fd;
	char *buf = malloc(sizeof(char *) * letters);

	if (filename == NULL)
		return (0);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);
	rd = read(fd, buf, letters);
	if (rd == -1)
		return (0);
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
		return (0);

	free(buf);
	close(fd);

	return (wr);
}
