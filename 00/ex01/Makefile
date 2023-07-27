# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmount <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/26 18:29:37 by rmount            #+#    #+#              #
#    Updated: 2023/07/26 18:42:37 by rmount           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmount <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 20:23:12 by rmount            #+#    #+#              #
#    Updated: 2023/07/25 20:54:09 by rmount           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

COMPILE	= c++

FLAGS	= -Wall -Werror -Wextra -std=c++98

SRC		= PhoneBook.cpp \
			Contact.cpp \
			main.cpp

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