# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 18:18:51 by nrahali           #+#    #+#              #
#    Updated: 2022/12/22 17:50:29 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


Array = Array
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp 

OBJ = ${SRC:.cpp=.o}

all : Array
	
$(Array): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Array 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f Array

re: fclean all