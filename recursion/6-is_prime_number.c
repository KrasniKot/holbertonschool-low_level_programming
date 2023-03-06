#include "main.h"

int is_prime_number(int n)
{
	if (n % 2 == 0 ||n % 3 == 0 || n % 5 == 0 
			|| n % 7 == 0 || n % 11 == 0 || n < 2)
	{
	return (0);
	}
	else
	{
		return (1);
	}

}
