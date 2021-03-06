# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tperret <tperret@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/06 17:12:52 by tperret           #+#    #+#              #
#    Updated: 2014/11/11 16:39:56 by tperret          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES =	ft_memset.c		\
			ft_memdel.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memcmp.c		\
			ft_memalloc.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_lstiter.c	\
			ft_lstdelone.c	\
			ft_lstdel.c		\
			ft_lstadd.c		\
			ft_memchr.c		\
			ft_memccpy.c	\
			ft_memmove.c	\
			ft_strlen.c		\
			ft_strdup.c		\
			ft_strcpy.c		\
			ft_strncpy.c	\
			ft_strcat.c		\
			ft_strncat.c	\
			ft_strlcat.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strstr.c		\
			ft_putendl.c	\
			ft_strcmp.c		\
			ft_strncmp.c	\
			ft_atoi.c		\
			ft_isalpha.c	\
			ft_isdigit.c	\
			ft_strnstr.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_strclr.c		\
			ft_striter.c	\
			ft_striteri.c	\
			ft_strequ.c		\
			ft_strnequ.c	\
			ft_putchar.c	\
			ft_putstr.c		\
			ft_strnew.c		\
			ft_strdel.c		\
			ft_strclr.c		\
			ft_strmap.c		\
			ft_strmapi.c	\
			ft_strsub.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_strsplit.c	\
			ft_putnbr.c		\
			ft_putstr_fd.c	\
			ft_putchar_fd.c \
			ft_strclr.c		\
			ft_itoa.c

HEADERS	= -I/

OBJECTS	= $(subst .c,.o,$(SOURCES))

WFLAGS	= -g -Wall -Werror -Wextra

CC		= gcc

.SILENT:

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(WFLAGS) $(HEADERS) -c -o $@ $^


clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)


re: fclean all

.PHONY: re fclean clean all
