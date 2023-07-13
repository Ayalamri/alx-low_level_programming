#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes from n2 to concarenate
 * Return: pointer to space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	unsigned int len = 0;
	char *result = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		len = len1 + len2;
	else
		len = len1 + n;

	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	strncpy(result, s1, len1);
	strncpy(result + len1, s2, n);
	result[len] = '\0';

	return (result);
}
