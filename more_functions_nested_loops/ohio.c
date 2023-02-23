#include <stdio.h>

/**
 * print_triangle - prints triangle.
 * @size: function variable.
 * Return: 0.
 */
void main(void)
{
	int size = 15;
        int y, x, p;
        int s = 1;
        int t = size;

        if (size <= 0)
                putchar (10);
        else
        {
                for (y = 0; y <= size; y++)
                {
			if (y != 0)
			{
                       		for (p = 0; p < t; p++)
                        	{
                                	putchar (' ');
                        	}
			}
                        for (x = 1; x < s; x++)
                        {
                                putchar ('#');
                        }
                        putchar (10);
                        s++;
                        t--;
                }
        }
}
