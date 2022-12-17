# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hasalam <hasalam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 20:02:08 by hasalam           #+#    #+#              #
#    Updated: 2022/11/24 16:51:00 by hasalam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isdigit.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_isprint.c\
ft_putchar_fd.c ft_strlcat.c ft_substr.c ft_atoi.c ft_itoa.c ft_putendl_fd.c\
ft_strlcpy.c ft_tolower.c ft_bzero.c ft_putnbr_fd.c ft_strlen.c\
ft_toupper.c ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strmapi.c ft_isalnum.c\
ft_memcmp.c ft_split.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c \
ft_striteri.c

BONUS = ft_lstadd_back.c ft_lstadd_front.c \
ft_lstiter.c ft_lstlast.c ft_lstnew.c ft_lstsize.c \
ft_lstdelone.c ft_lstclear.c ft_lstmap.c

CC		= cc
RM		= rm -f
CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:%.c=%.o}

OBJSBONUS = ${BONUS:%.c=%.o}

all:	${NAME}

%.o:%.c libft.h
		${CC} ${CFLAGS} -c $<

$(NAME): ${OBJS} 
		ar rcs ${NAME} ${OBJS}

bonus:	${OBJS} ${OBJSBONUS} 
		ar rcs ${NAME} ${OBJS} ${OBJSBONUS}

clean:
		${RM} ${OBJS} ${OBJSBONUS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY: fclean clean re all bonus
