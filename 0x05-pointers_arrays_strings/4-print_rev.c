#include<stdio.h>
#include "main.h"
/**
 * print_rev -  prints a string, in reverse
 * @s: - pointer
 * return: 0
 */
void print_rev(char *s)
{
	if (*s != '\0')
	{
	print_rev(s + 1);
	printf("%c", *s);
	}
}
