#include"main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: -character
 * Return: Always 0
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -(n % 10);
	}
	else if (n > 0)
	{
		n = n % 10;
	}
	else
	{
		n = 0;
	}
	_putchar(n + '0');
	return (n);
}
