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
	int i = 0;
	int j = 0;
	char xyz;

	while (dest[i] != '\0')
	{
	xyz = dest[i];
	i++;
	j++;
	}
	while (src[i] != '\0')
	{
	xyz = src[j];
	i++;
	j++;
	}
	xyz = '\0';
	printf("%c", xyz);
	return (0);
}
