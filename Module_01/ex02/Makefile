# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 21:21:09 by nrahali           #+#    #+#              #
#    Updated: 2022/10/30 22:51:40 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

brain = brain
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp 

OBJ = ${SRC:.cpp=.o}

all : brain
	
$(brain): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o brain

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f brain

re: fclean all