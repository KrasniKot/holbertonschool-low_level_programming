#include <stdio.h>

void main(void)
{
        int y, x, p;
        int size = 3;
        int s = 1;
        int t = size;
        
        if (size <= 0)
                putchar (10);
        else
        {
                for (y = 0; y < size; y++)
                {
                        for (p = 1; p < t; p++)
                        {
                            putchar (' ');
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
