#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int sr, det, n_red = 1024, wrote, close_sr, close_det;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char bu[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	sr = open(argv[1], O_RDONLY);
	check_IO_stat(sr, -1, argv[1], 'O');
	det = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(det, -1, argv[2], 'W');
	while (n_red == 1024)
	{
		n_red = read(sr, bu, sizeof(bu));
		if (n_red == -1)
			check_IO_stat(-1, -1, argv[1], 'O');
		wrote = write(det, bu, n_red);
		if (wrote == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	close_sr = close(sr);

	check_IO_stat(close_sr, sr, NULL, 'C');

	close_det = close(det);

	check_IO_stat(close_det, det, NULL, 'C');

	return (0);
}

/**
 * check_IO_stat - checks if a file can be opened or closed
 * @stat: file descriptor of the file to be opened
 * @filename: name of the file
 * @mode: closing or opening
 * @fd: file descriptor
 *
 * Return: void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
