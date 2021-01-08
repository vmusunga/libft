#include "libft.h"

int     ft_strlen(char *str)
{
    int x;

    x = 0;
    while (str[x])
        x++;
    return x;
}

char    *ft_strdup(char *s1)
{
    int i;
    char *cpy;
    int len;

    len = ft_strlen(s1);
    i = 0;
    if (!(cpy = malloc(sizeof(char) * (len + 1))))
        return (0);
    while (s1[i])
    {
        cpy[i] = s1[i];
        i++;
    }
    cpy[i] = '\0';
    return (cpy);
}

int main()
{
    char *ptr = "brrt";
    printf("%s\n",ft_strdup(ptr));
    return (0);
}