#include<stdlib.h>
#include<string.h>
#include"main.h"
#include<stdio.h>
/**
 * _strcat - concatenates two strings
 * strlen - length of string
 * @i - integer
 * @j - integer
 * @dest: - String 1
 * @src: - String 2
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i = strlen(dest);
	int j = strlen(src);

	for (j = 0; src[j]; i++, j++)
	dest[i + 1] = src[j + 2];
	printf("%s%s", dest, src);
	printf("%s", src);
	return (0);
}
