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
	int i;
	int j;

	for (i = 0; src[i] != '\0'; j++, i++)
	{
	dest[i + '1'] = src[j];
	printf("%s%s", dest, src);
	}
	return (0);
}

