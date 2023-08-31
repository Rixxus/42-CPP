# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmount <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 15:28:06 by rmount            #+#    #+#              #
#    Updated: 2023/08/28 16:12:20 by rmount           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Fixed

COMPILE	= c++

FLAGS	= -Wall -Werror -Wextra -std=c++98

SRC		= main.cpp Fixed.cpp

OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(COMPILE) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(COMPILE) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re