# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmount <rmount@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 15:28:06 by rmount            #+#    #+#              #
#    Updated: 2023/09/08 10:49:40 by rmount           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Animal

COMPILE	= c++

FLAGS	= -Wall -Werror -Wextra -std=c++98

SRC		= main.cpp Animal.cpp Brain.cpp Cat.cpp Dog.cpp

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