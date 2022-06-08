#include "main.h"
/**
 *_islower - checks if a character is in lower case
 * @c: checks for letter c if it is in lower case or otherwise
 * Return: 1 if not c and 0 if c is in lowercase
 */
int _islower(int c);
{
	if (c < 97 || c > 122)
	{
	return (0);
	}
	else
	{
	return (1);
	}
}

