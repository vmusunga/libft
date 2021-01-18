/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 13:28:36 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/18 12:01:05 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	size_t	i;

	i = 0;
	if ((!lst) || (!(*f)) || (!(*del)))
		return (NULL);
	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	while (lst != 0)
	{
		new->content = (*f)(lst->content);
		new = new->next;
		i++;
		lst = lst->next;
	}
	return (new);
}
