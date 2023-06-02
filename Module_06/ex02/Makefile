# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 16:07:01 by nrahali           #+#    #+#              #
#    Updated: 2022/12/16 22:54:35 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Identify = Identify
CPPFLAGS = -Wall -Wextra -Werror  -std=c++98
CC = c++
SRC = main.cpp Identify.cpp

OBJ = ${SRC:.cpp=.o}

all : Identify
	
$(Identify): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Identify 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f Identify

re: fclean all