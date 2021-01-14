/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 14:24:00 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/14 15:05:14 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_overflow(unsigned long long x, int sign)
{
	unsigned long long min;
	unsigned long long max;

	min = 9223372036854775808U;
	max = 9223372036854775807U;
	if (x > min && sign < 0)
		return (0);
	if (x > max && sign > 0)
		return (-1);
	return (2);
}

int			ft_atoi(const char *str)
{
	int i;
	int sign;
	unsigned long long x;

	sign = 1;
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	x = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		x = x * 10;
		x = x + str[i] - 48;
		i++;
	}
	if (ft_overflow(x, sign) != 2)
		return (ft_overflow(x, sign));
	return (x * sign);
}

int main()
{
	char *x = "-9223372036854775809";
	printf("%d\n", ft_atoi(x));
	printf("%d",atoi(x));
	return (0);
}
