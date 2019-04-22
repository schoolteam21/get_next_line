# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhelly <dhelly@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/26 16:48:11 by dhelly            #+#    #+#              #
#    Updated: 2018/12/14 14:13:48 by dhelly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = *.c
OBJ = *.o
FLAGS  = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	/bin/rm -f	$(OBJ)

fclean: clean
	/bin/rm -f	$(NAME)

re: fclean all
