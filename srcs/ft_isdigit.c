/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 14:31:58 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/08 15:22:05 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}

int main()
{
    int c;
    c = 2;
    printf("\nResult when number is passed: %d", ft_isdigit(c));

    c = 'r';
    printf("\nResult when lowercase alphabet is passed: %d", ft_isdigit(c));

    c = 72;
    printf("\nResult when digit character is passed: %d", ft_isdigit(c));

    return 0;
}