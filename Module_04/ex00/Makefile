# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 21:19:43 by nrahali           #+#    #+#              #
#    Updated: 2022/11/28 23:09:57 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Animal = Animal
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

OBJ = ${SRC:.cpp=.o}

all : Animal
	
$(Animal): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Animal 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f Animal

re: fclean all