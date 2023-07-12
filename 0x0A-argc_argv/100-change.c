#include"main.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int co, ce;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	ce = atoi(argv[1]);

	if (ce < 0)
	{
		printf("0\n");
		return (0);
	}

	co = 0;

	co += ce / 25;
	ce %= 25;

	co += ce / 10;
	ce %= 10;

	co += ce / 5;
	ce %= 5;

	co += ce / 2;
	ce %= 2;

	co += ce;

	printf("%d\n", co);

	return (0);
}
