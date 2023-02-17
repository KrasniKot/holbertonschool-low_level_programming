#include "main.h"

/**
 * times_table - prints 9 times table.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int x, y;
	    
	    for (y = 0; y <= 9; y++)
	    
		    for (x = 0; x <= 9; x++)
		    {
			    int prod = x * y;
			    if (x == 0)
			    {
				    _putchar('0');
			    }
			    else if
			    {
				    if (prod <=9)
				    {
					    _putchar(',');
					    _putchar(' ');
					    _putchar(prod + '0');
				    }
				    else
				    {
					    _putchar(',');
                                            _putchar(' ');
					    _putchar(prod / 10 + '0');
					    _putchar(prod % 10 + '0');
				    }
			    }
		    _putchar(10);
		    }
}
