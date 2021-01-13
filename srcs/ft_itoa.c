#include "libft.h"

int		ft_intcount(int n)
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

char	*ft_revstr(char *str)
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

char	*ft_itoa(int n)
{
	int i;
	unsigned int nb;
	char *str;

	nb = n;
	i = 0;
	if (n == 0)
		return ("0");
	if (n < 0)
		nb = -n;
	if (!(str = malloc(sizeof(char) * (ft_intcount(n) + 2))))
		return (0);
	while (i < ft_intcount(n))
	{
		str[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	if (n < 0)
		str[i++] = '-';
	str[i] = '\0';
	ft_revstr(str);
	return (str);
}
/*
int main(int ac, char **av)
{
	int x;
	//x = atoi(av[1]);
	x = -10;

	printf("%s", ft_itoa(x));
	return (0);
}*/