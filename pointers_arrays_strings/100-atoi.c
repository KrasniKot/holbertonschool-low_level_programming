#include <stdio.h>

/**
 * _atoi - finds numbers in a string.
 * @s: array.
 * Return: number.
 */
int _atoi(char *s)
{
	int sn = 0, i = 0;
	unsigned int n = 0;

	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = (n * 10) + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}

		else if (s[i] == '-')
		{
			sn++;
		}
		i++;
	}

	if (sn % 2 == 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
