# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbulot <jbulot@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/09 14:40:23 by jbulot            #+#    #+#              #
#    Updated: 2025/12/10 11:02:40 by jbulot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_bzero.c		\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_memset.c		\
			ft_strlcat.c	\
			ft_strlcpy.c	\
			ft_strlen.c

OBJS	=	$(SRCS:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

all		:
			make $(NAME)

$(NAME)	:	$(OBJS)
			ar crs $(NAME) $(OBJS)

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
