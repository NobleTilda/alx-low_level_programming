#include "main.h"
/**
 * _isdigit - checks if the character is digit
 * @c: the character to be checked
 * Return: 1 for a charcter that is digit 0 for any else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
