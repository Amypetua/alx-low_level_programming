#include "main.h"

/**
 * _isupper - function that check for upper case character
 * @c : int that is checked if it is uppper case
 * Return: 1 if c is uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
