# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 21:21:26 by nrahali           #+#    #+#              #
#    Updated: 2022/10/30 22:51:44 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

weapon = weapon
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = ${SRC:.cpp=.o}

all : weapon
	
$(weapon): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o weapon

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f weapon

re: fclean all