# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 23:26:37 by nrahali           #+#    #+#              #
#    Updated: 2022/11/25 15:06:08 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FragTrap = FragTrap
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJ = ${SRC:.cpp=.o}

all : FragTrap
	
$(FragTrap): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o FragTrap 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f FragTrap

re: fclean all