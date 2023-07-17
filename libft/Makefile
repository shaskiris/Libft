# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shaskiri <shaskiri@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/05 19:40:29 by shaskiri          #+#    #+#              #
#    Updated: 2023/07/16 20:23:33 by shaskiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a

CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror

FILES	:= $(shell find . -type f -name "ft_*.c")
OBJ		:= $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
