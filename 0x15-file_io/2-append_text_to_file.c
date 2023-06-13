#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* append_text_to_file - appends text at the end of a file.
* @filename: name of file to be appended
* @text_content: content appended
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, app, numletter;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (numletter = 0; text_content[numletter]; numletter++)
		;
		app = write(fd, text_content, numletter);

		if (app == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
