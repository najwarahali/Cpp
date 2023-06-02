# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 18:18:51 by nrahali           #+#    #+#              #
#    Updated: 2022/12/18 21:20:51 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


iter = iter
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp 

OBJ = ${SRC:.cpp=.o}

all : iter
	
$(iter): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o iter 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f iter

re: fclean all