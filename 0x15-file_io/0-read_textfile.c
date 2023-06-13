#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: name of the file.
* @letters: number of letters to be read and printed.
* Return: number of letters it read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lnread, lnwrite;
	char *buffer;

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}
	lnread = read(fd, buffer, letters);
	close(fd);
	if (lnread == -1)
	{
		free(buffer);
		return (0);
	}
	lnwrite = write(STDOUT_FILENO, buffer, lnread);
	free(buffer);
	if (lnread != lnwrite)
	{
		return (0);
	}
	return (lnwrite);
}
