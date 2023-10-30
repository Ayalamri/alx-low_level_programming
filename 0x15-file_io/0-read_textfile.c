#include"main.h"

/**
 * read_textfile - Reads and prints a text file to stdout.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t y;
	char bouf[BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	y = read(x, &bouf[0], letters);
	y = write(STDOUT_FILENO, &bouf[0], y);
	close(x);
	return (y);
}
