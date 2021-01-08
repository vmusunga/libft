#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int start;

	i = 0;
	while (str[i] != '\0')
	{
		start = 0;
		while (str[i + start] == to_find[start])
		{
			if (to_find[start + 1] == '\0')
			{
				return (&str[i]);
			}
			start++;
		}
		i++;
	}
	if (to_find[0] == '\0')
		return (str);
	return (0);
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
    int i;
    char *x;
    char *y;
    char *ptr;
    int size = 3;

    i = 0;
    x = "idlfsabclsf";
    y = "abc";
    ptr = ft_strstr(x,y);
    printf("%s\n", ptr);
    /*while (i < size)
    {
        write(1, &ptr[i], 1);
        i++;
    }*/
    return (0);
}