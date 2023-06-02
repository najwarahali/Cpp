# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 23:26:37 by nrahali           #+#    #+#              #
#    Updated: 2022/11/25 00:52:47 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ScavTrap = ScavTrap
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ = ${SRC:.cpp=.o}

all : ScavTrap
	
$(ScavTrap): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o ScavTrap 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f ScavTrap

re: fclean all