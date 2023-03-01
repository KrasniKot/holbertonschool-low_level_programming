#include <stdio.h>

int _atoi(char *s)
{
        int n = 0;

        while (*s)
        {
                if (*s >= '0' && *s <= '9')
                {
                       n = (n * 10) + (*s - '0');
                }
                else if (*s == '-')
{
n =- 1;
}
s++;
}
return (n);
}
