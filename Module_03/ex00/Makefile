# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 23:26:37 by nrahali           #+#    #+#              #
#    Updated: 2022/11/24 20:28:07 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ClapTrap = ClapTrap
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp ClapTrap.cpp

OBJ = ${SRC:.cpp=.o}

all : ClapTrap
	
$(ClapTrap): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o ClapTrap 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f ClapTrap

re: fclean all