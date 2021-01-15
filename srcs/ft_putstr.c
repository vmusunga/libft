/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:24:05 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/15 10:38:51 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
