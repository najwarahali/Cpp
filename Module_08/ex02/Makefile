# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/27 22:50:05 by nrahali           #+#    #+#              #
#    Updated: 2022/12/27 23:14:31 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Mutated = Mutated
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp 

OBJ = ${SRC:.cpp=.o}

all : Mutated
	
$(Mutated): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Mutated 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f Mutated

re: fclean all