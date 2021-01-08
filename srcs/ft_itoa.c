#include "libft.h"

int ft_intcount(int n)
{
    int i;

    i = 0;
    while (n != 0)
    {
        n = n / 10;
        i++;
    }
    return (i);
}

char    *ft_revstr(char *str)
{
    char buff;
    int i;
    int len;
    int x;

    len = 0;
    i = 0;
    while (str[len++])
    x = len - 1;
    while (i < x)
    {
        buff = str[i];
        str[i] = str[x];
        str[x] = buff;
        i++;
        x--;
    }
    return (str);
}

char    *ft_itoa(int n)
{
    int i;
    int count;
    int neg;
    unsigned int nb;
    char *str;
    
    neg = 0;
    nb = n;
    i = 0;
    count = ft_intcount(n);

    if (n < 0)
    {
        nb = -n;
        neg = 1;
    }
    else
        nb = n;

    if (!(str = malloc(sizeof(char) * (count + 2))))
        return (0);
    
    while (i < count)
    {
        str[i] = (nb % 10) + 48;
        nb = nb / 10;
        i++;
    }
    if (neg == 1)
        str[i++] = '-';
    str[i] = '\0';
    ft_revstr(str);
    return (str);
}

int main()
{
    int x;
    x = -2147483648;

    printf("%s", ft_itoa(x));
    return (0);
}