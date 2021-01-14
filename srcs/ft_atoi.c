/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 14:24:00 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/14 13:04:24 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int     ft_atoi(const char *str)
{
	int i;
	int sign;
	unsigned long x;

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
	//if (x > 4294967295U || x < -4294967295U)
	//	return (sign * 1);
	return (x * sign);
}
/*
int main()
{
	char *x = "4294967295";
	printf("%d", ft_atoi(x));
	return (0);
}*/
