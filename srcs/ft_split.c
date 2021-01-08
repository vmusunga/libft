#include "libft.h"

int     ft_countw(char const *str, char c)
{
    int i;
    int count;
    
    i = 0;
    if (str[0] == c)
        count = 0;
    else
        count = 1;
    while (str[i])
    {
        if (str[i] == c && str[i + 1] != '\0')
            count++;
        i++;
    }
    return(count);
}

int     ft_len(int i, char const *str, char c)
{
    int x;

    x = 0;
    if (str[i] && str[i] == c)
        i++;
    while (str[i] && str[i] != c)
    {
        i++;
        x++;
    }
    return(x);
}

char    **ft_split(char const *s, char c)
{
    char **dest;
    int i;
    int x;
    int y;

    i = 0;
    //printf("%d", ft_countw(s,c));
    if (!(dest = malloc(sizeof(char**) * (ft_countw(s, c) + 10))))
        return (0);
    while (x <= ft_countw(s,c))
    {
        y = 0;
        if (!(dest[x] = malloc(sizeof(char*) * (ft_len(i, s, c) + 10))))
            return (0);
        if (s[i] == c)
            i++;
        while (s[i] != c)
        {
            //printf("%c", s[i]);
            dest[x][y] = s[i];
            //printf("%c", dest[x][y]);
            i++;
            y++;
        }
        dest[x][y] = '\0';
        //printf("%s\n",dest[x]);
        x++;
    }
    dest[x] = 0;
    return (dest);
    free(dest);
}

void    ft_putstr(char *str)
{
    int i;
    i = 0;

    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main()
{
    char **test;
    char *str = "abc-defgh-ijkl-m";
    char sep = '-';
    int x;
    int i;

    i = 0;
    x = 0;
    test = ft_split(str, sep);
    while (test[x])
    {
        ft_putstr(test[x]);
        //write(1, "\n", 1);
        x++;
    }
    return(0);
}