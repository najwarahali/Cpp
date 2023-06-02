# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 21:20:11 by nrahali           #+#    #+#              #
#    Updated: 2022/10/30 23:24:39 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


Zombie = Zombie
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = Zombie.cpp main.cpp zombieHorde.cpp

OBJ = ${SRC:.cpp=.o}

all : Zombie
	
$(Zombie): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o Zombie

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f Zombie

re: fclean all