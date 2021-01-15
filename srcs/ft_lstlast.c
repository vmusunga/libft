/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 11:23:08 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/15 11:29:58 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if(lst == 0)
		return (0);
	while (lst->next != 0)
		lst = lst->next;
	return (lst);
}
