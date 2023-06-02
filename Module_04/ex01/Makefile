# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 21:19:43 by nrahali           #+#    #+#              #
#    Updated: 2022/12/04 15:17:11 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Brain = Brain
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ = ${SRC:.cpp=.o}

all : Brain
	
$(Brain): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Brain 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f Brain

re: fclean all