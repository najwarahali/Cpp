# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 16:07:01 by nrahali           #+#    #+#              #
#    Updated: 2022/12/14 22:42:24 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Serialization = Serialization
CPPFLAGS = -Wall -Wextra -Werror  -std=c++98
CC = c++
SRC = main.cpp Serialization.cpp

OBJ = ${SRC:.cpp=.o}

all : Serialization
	
$(Serialization): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Serialization 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f Serialization

re: fclean all