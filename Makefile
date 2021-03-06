# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchamsed <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 15:08:08 by bchamsed          #+#    #+#              #
#    Updated: 2017/11/09 15:08:10 by bchamsed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCS = ft_memcmp.c\
	ft_putstr.c\
	ft_striteri.c\
	ft_strnstr.c\
	ft_atoi.c\
	ft_memcpy.c\
	ft_putstr_fd.c\
	ft_strjoin.c\
	ft_strrchr.c\
	ft_bzero.c\
	ft_memdel.c\
	ft_strcat.c\
	ft_strlcat.c\
	ft_isalnum.c\
	ft_memmove.c\
	ft_strchr.c\
	ft_strlen.c\
	ft_strstr.c\
	ft_isalpha.c\
	ft_memset.c\
	ft_strclr.c\
	ft_strmap.c\
	ft_strsub.c\
	ft_isascii.c\
	ft_putchar.c\
	ft_strcmp.c\
	ft_strmapi.c\
	ft_strtrim.c\
	ft_isdigit.c\
	ft_putchar_fd.c\
	ft_strcpy.c\
	ft_strncat.c\
	ft_tolower.c\
	ft_isprint.c\
	ft_putendl.c\
	ft_strdel.c\
	ft_strncmp.c\
	ft_toupper.c\
	ft_itoa.c\
	ft_putendl_fd.c\
	ft_strdup.c\
	ft_strncpy.c\
	ft_memalloc.c\
	ft_putnbr.c\
	ft_strequ.c\
	ft_strnequ.c\
	ft_memchr.c\
	ft_memccpy.c\
	ft_putnbr_fd.c\
	ft_striter.c\
	ft_strnew.c\
	ft_strrev.c\
	ft_range.c\
	ft_power.c\
	ft_is_prime.c\
	ft_lstadd.c\
	ft_lstnew.c\
	ft_lstdel.c\
	ft_lstdelone.c\
	ft_strsplit.c\
	ft_lstmap.c\
	ft_lstiter.c\
	ft_sqrt.c\

	
OBJECT = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean:
	rm -rf $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
