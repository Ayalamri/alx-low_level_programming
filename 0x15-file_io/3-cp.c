#include"main.h"

/**
 * main - Copies the content of one file to another.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 *
 * Return: 0 on success, or the appropriate exit code on failure.
 */

int main(int argc, char *argv[])
{
	int x, y, r, w;
	char bou[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from
			file_to\n");
		return (97);
	}
	x = open(argv[1], O_RDONLY);
	if (x == -1)
	{
		dprintf(2, "Error: Can't read
			from file %s\n", argv[1]);
		return (98);
	}
	y = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
		| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (y == -1)
	{
		dprintf(2, "Error: Can't write
			to %s\n", argv[2]);
		close(x);
		return (99);
	}
	while ((r = read(x, bou, BUF_SIZE)) > 0)
	{
		w = write(y, bou, r);
		if (w != r)
		{
			dprintf(2, "Error: Can't write
				to %s\n", argv[2]);
			close(x);
			close(y);
			return (99);
		}
	}
	if (r == -1)
	{
		dprintf(2, "Error: Can't read from
file %s\n", argv[1]);
		close(x);
		close(y);
		return (98);
	}
	if (close(x) == -1)
	{
		dprintf(2, "Error: Can't close
			fd %d\n", x);
		return (100);
	}
	if (close(y) == -1)
	{
		dprintf(2, "Error: Can't close
			fd %d\n", y);
		return (100);
	} return (0);
}
