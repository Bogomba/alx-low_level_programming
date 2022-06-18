#include"main.h"
#include<stdio.h>
/**
 * _strncat - concatenates two strings
 * @src: - string 1
 * @dest: - string 2
 * @n: - integer
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	strcpy(dest, *dest);
	strcpy(src, *src);
	_strncat(dest, src, sizeof(dest) - strlen(dest) - n);
	printf("%s", dest);
	return (0);
}
