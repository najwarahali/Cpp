# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 21:19:43 by nrahali           #+#    #+#              #
#    Updated: 2022/12/01 00:02:02 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Abstract = Abstract
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ = ${SRC:.cpp=.o}

all : Abstract
	
$(Abstract): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Abstract 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f Abstract

re: fclean all