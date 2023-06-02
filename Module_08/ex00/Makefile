# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 16:10:23 by nrahali           #+#    #+#              #
#    Updated: 2022/12/24 23:56:19 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

easyfind = easyfind
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp 

OBJ = ${SRC:.cpp=.o}

all : easyfind
	
$(easyfind): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o easyfind 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f easyfind

re: fclean all