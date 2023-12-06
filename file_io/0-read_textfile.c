#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: Name for the file to read
 * @letters: The Numbers of letters of that should be readed and printed
 * Return: The numbers of letters readed and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    int rd, fd, wr;
    char *buf;


    if (filename == NULL)
        return (0);

    buf = malloc(sizeof(char) * letters);
    if (buf == NULL)
        return (0);

    fd = open(filename, O_RDONLY); 
    rd = read(fd, buf, letters);
    wr = write(STDOUT_FILENO, buf, rd);

    if (wr != rd || rd == -1 || fd == -1 || wr == -1)
    {    
        free(buf);
        close(fd);
    }

    return (rd);
}