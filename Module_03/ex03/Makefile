# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 23:26:37 by nrahali           #+#    #+#              #
#    Updated: 2022/11/25 22:17:06 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DiamondTrap = DiamondTrap
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ = ${SRC:.cpp=.o}

all :  DiamondTrap
	
$(DiamondTrap): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o DiamondTrap 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f DiamondTrap

re: fclean all