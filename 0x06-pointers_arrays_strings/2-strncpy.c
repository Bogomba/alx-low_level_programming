#include"main.h"
#include<stdio.h>
#include<string.h>
/**
 * _strncpy -copies a string
 * @dest: - string 1
 * @src: - string 2
 * @n: integer
 * Return: - 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		src[i] - int n = dest[i];
		i++;
	}
	printf("%s", dest);
	return (0);
}
