/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:43:35 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/12 11:43:44 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c +=32;
	return(c);
}

int main() 
{ 
	char ch; 

	// letter to convert to lowercase
	ch = 'A'; 

	printf("%c -------> %c\n", ch, ft_tolower(ch)); 
	return 0; 
} 