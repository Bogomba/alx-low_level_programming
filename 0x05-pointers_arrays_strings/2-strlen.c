#include "main.h"
#include<stdio.h>
/**
 *  _strlen -  returns the length of a string
 *  Return: Void
 *  @s: String
 */
int _strlen(char *s)
{
	char s[] = "My first strlen!";
	int i;

	for (i = 0; s[i] != '\0'; ++1);
	printf("Length of the string: %d", i);
	return (0);
}
