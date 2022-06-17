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
	int j;
	int i = strlen(dest);

	for (j = 0; src[j] != '\0'; i++, j++)
	{
	dest[i] = src[j];
	}
	dest[i] = '\0';
	return (0);
}
