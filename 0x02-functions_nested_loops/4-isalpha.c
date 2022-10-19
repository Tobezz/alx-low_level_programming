#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: character to be checked
 *
 * Return: 1if character is a letter,0notherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z'0 || (c >= 'A' && C <= 'Z'))
		return (1);
	else
		return (0);
}
