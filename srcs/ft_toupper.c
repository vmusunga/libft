/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:11:11 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/12 11:44:25 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -=32;
	return(c);
}

int main() 
{ 
	char ch; 

	// letter to convert to uppercase
	ch = 'a'; 

	printf("%c --------> %c\n", ch, ft_toupper(ch));
	return 0; 
} 