#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    ft_putchar(char c);
void    ft_putstr(char *str);

int     ft_strlen(char *str);
int     ft_atoi(char *str);

int     ft_isalnum(char *str);
int     ft_isalpha(char *str);
int     ft_isdigit(char *str);
int     ft_isprint(char *str);

char    *ft_strdup(char *str);
char    *ft_strjoin(char *s1, char *s2);

#endif