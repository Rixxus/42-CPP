# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmount <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/07 10:19:24 by rmount            #+#    #+#              #
#    Updated: 2023/08/07 14:46:21 by rmount           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= zombie

COMPILE	= c++

FLAGS	= -Wall -Werror -Wextra -std=c++98

SRC		= main.cpp Zombie.cpp zombieHorde.cpp

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