#include<unistd.h>
#include"main.h"

/**
 * print_alphabet_x10 - a function that returns void
 * main - Entry point- prints, 10x the alphabet
 * Return: Always 0 (success)
 */
void print_alphabet(void)

{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	_putchar(lower * 10);
	_putchar('\n');
}
