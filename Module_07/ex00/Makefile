# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 18:18:51 by nrahali           #+#    #+#              #
#    Updated: 2022/12/21 18:12:40 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


whatever = whatever
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp 

OBJ = ${SRC:.cpp=.o}

all : whatever
	
$(whatever): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o whatever 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f whatever

re: fclean all