#include"main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	char lens1, lens2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lens1 = strlen(s1);
	lens2 = strlen(s2);

	ptr = malloc(sizeof(char) * (lens1 + lens2 + 1));

	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, s1);
	strcat(ptr, s2);

	return (ptr);
}
