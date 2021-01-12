/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:36:45 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/12 15:39:58 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int i;
	i = 0;

	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

int		main()
{
	char *ptr = "Hello";
	ft_putstr_fd(ptr, 1);
	return (0);
}