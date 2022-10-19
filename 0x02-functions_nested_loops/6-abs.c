#include "main.h"

/**
 * _abs - computes the absolut value of an integer
 *
 * @i: input number as an integer
 *
 *Return: absolute value
 */
in _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
