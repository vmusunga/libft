/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:19:44 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/12 19:29:09 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
		
	 if ((c <= 'z' && c >= 'a') || (c <= '9' && c >= '0')
								|| (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}