#include "main.h"

/**
 * _isalpha - checks if c is alpha.
 *@c: _isalpha variable.
 *Returns: 1 if alpha, 0 if nonalpha.
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
