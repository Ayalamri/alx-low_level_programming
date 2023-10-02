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
	if (filename == NULL)
		return (0);

	int x;
	ssize_t r, w;
	char *y;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);

	y = malloc(sizeof(char) * letters);
	if (y == NULL)
	{
		close(x);
		return (0);
	}

	r = read(x, y, letters);
	close(x);

	if (r == -1)
	{
		free(y);
		return (0);
	}

	w = write(STDOUT_FILENO, y, r);
	free(y);

	if (w == -1 || (size_t)w < r)
		return (0);

	return (w);
}
