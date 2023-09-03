# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmount <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 15:28:06 by rmount            #+#    #+#              #
#    Updated: 2023/09/03 21:25:03 by rmount           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ScavTrap

COMPILE	= c++

FLAGS	= -Wall -Werror -Wextra -std=c++98

SRC		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

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