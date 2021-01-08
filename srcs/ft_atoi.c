#include "libft.h"

int     ft_atoi(const char *str)
{
    int i;
    int sign;
    int x;

    sign = 1;
    i = 0;

     while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
            i++;
     while (str[i] == '+' || str[i] == '-')
        {
            if (str[i] == '-')
                sign = -sign;
            i++;
        }
    x = 0;
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        x = x * 10;
        x = x + str[i] - 48;
        i++;
    }
    return (x * sign);
}