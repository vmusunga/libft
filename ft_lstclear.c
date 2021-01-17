/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 13:24:43 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/15 13:26:24 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *buff;

	if ((!(*lst)) || (!(*del)))
		return ;
	buff = *lst;
	while (buff->next != 0)
	{
		del(buff->content);
		free(buff);
		buff = buff->next;
	}
	*lst = 0;
}
