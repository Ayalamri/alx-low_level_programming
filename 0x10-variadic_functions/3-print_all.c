#include"variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	unsigned int i = 0;
	char cf;

	va_start(args, format);

	while (format && format[i])
	{
		cf = format[i];

		if (cf == 'c')
			printf("%c", va_arg(args, int));

		else if (cf == 'i')
			printf("%d", va_arg(args, int));

		else if (cf == 'f')
			printf("%f", va_arg(args, double));

		else if (cf == 's')
		{
			str = va_arg(args, char *);

			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}

		if ((format[i + 1]) && (cf == 'c' || cf == 'i' || cf == 'f' || cf == 's'))
			printf(", ");

		i++;
	}

	va_end(args);

	printf("\n");
}
