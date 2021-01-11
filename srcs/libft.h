/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 14:24:19 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/11 17:37:41 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    ft_putchar(int c);
void    ft_putstr(char *str);

size_t  ft_strlen(const char *str);

int     ft_atoi(const char *str);

int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);

char    *ft_strdup(const char *str);
char    *ft_strjoin(char *s1, char *s2);

#endif