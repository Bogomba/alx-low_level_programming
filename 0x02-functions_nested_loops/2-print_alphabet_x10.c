#include<unistd.h>
#include"main.h"
/**
 * print_alphabet_x10 - a function that prints the alpabet 10times
 * main - check the code
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	_putchar(lower * 10);
	_putchar('\n');
}
