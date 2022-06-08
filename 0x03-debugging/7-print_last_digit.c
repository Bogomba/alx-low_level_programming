include"main.h"
/**
 * print_last_digit - prints last digit of int
 * @x: - character
 * Return: Values of last digit
 */
int print_last_digit(int x)
{
	int x;

	if (x < 0)
	{
	x = -(x % 10);
	}
	else if
	{
	x = x % 10;
	}
	else
	{
	x = 0;
	}
	_putchar(x + '0');
	return (x);
}
