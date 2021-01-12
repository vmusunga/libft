# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/12 17:51:18 by vmusunga          #+#    #+#              #
#    Updated: 2021/01/12 19:08:00 by vmusunga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	srcs/ft_atoi.c \
			srcs/ft_bzero.c \
			srcs/ft_calloc.c \
			srcs/ft_isalnum.c \
			srcs/ft_isalpha.c \
			srcs/ft_isascii.c \
			srcs/ft_isdigit.c \
			srcs/ft_isprint.c \
			srcs/ft_itoa.c \
			srcs/ft_memccpy.c \
			srcs/ft_memchr.c \
			srcs/ft_memcmp.c \
			srcs/ft_memcpy.c \
			srcs/ft_memmove.c \
			srcs/ft_memset.c \
			srcs/ft_putchar_fd.c \
			srcs/ft_putendl_fd.c \
			srcs/ft_putnbr_fd.c \
			srcs/ft_putstr_fd.c \
			srcs/ft_split.c \
			srcs/ft_strchr.c \
			srcs/ft_strdup.c \
			srcs/ft_strjoin.c \
			srcs/ft_strlcat.c \
			srcs/ft_strlcpy.c \
			srcs/ft_strlen.c \
			srcs/ft_strmapi.c \
			srcs/ft_strncmp.c \
			srcs/ft_strnstr.c \
			srcs/ft_strrchr.c \
			srcs/ft_substr.c \
			srcs/ft_tolower.c \
			srcs/ft_toupper.c

		# srcs/ft_lstadd_back.c \
			srcs/ft_lstadd_front.c \
			srcs/ft_lstclear.c \
			srcs/ft_lstdelone.c \
			srcs/ft_lstiter.c \
			srcs/ft_lstlast.c \
			srcs/ft_lstmap.c \
			srcs/ft_lstnew.c \
			srcs/ft_lstsize.c \

INCS	= includes
OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
CC		= gcc
LIBC	= ar rc
LIBR	= ranlib
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}:	${OBJS}
			${LIBC} ${NAME} ${OBJS}
			${LIBR} ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all