#include<unistd.h>
#include "main.h"
/**
 * main - check the code
 * Return: Always 0 (Success)
 */

void print_alphabet(void)

{
	char lower;

	for (lower = 'a', lower <= 'z', lower++)
	_putchar(lower);
	_putchar('\n');
	return (0);
}
