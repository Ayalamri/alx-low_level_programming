#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: Random number
 *
 * Return : 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d id negative", n);
	else
		printf("%d is zero", n);
	return (0);
}
