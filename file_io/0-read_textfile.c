#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: Name for the file to read
 * @letters: The Numbers of letters of that should be readed and printed
 * Return: The numbers of letters readed and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    int rd, fd;
    char *buf;


    if (filename == NULL)
        return (0);

    buf = malloc(sizeof(char *) * letters);
    if (buf == NULL)
        return (0);

    fd = open(filename, O_RDONLY, 0600); 
    if (fd == -1)
        return (0);
    rd = read(fd, buf, letters);
    write(STDOUT_FILENO, buf, rd);
    
    free(buf);
    close(fd);

    return (rd);
}
