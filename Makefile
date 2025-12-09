# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbulot <jbulot@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/09 14:40:23 by jbulot            #+#    #+#              #
#    Updated: 2025/12/09 14:58:01 by jbulot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC		=	ft_isalpha.c

OBJ		=	$(SRC:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

all		:
			make $(NAME)

$(NAME)	:	$(OBJ)
			ar crs $(NAME) $(OBJ)

clean	:
			$(RM) $(OBJ)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
