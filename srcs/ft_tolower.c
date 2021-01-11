/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:20:59 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/11 14:24:25 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_tolower(int c)
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