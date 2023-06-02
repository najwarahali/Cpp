# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 17:18:33 by nrahali           #+#    #+#              #
#    Updated: 2022/10/12 17:21:11 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

account = account
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = Account.cpp tests.cpp 

OBJ = ${SRC:.cpp=.o}

all : account
	
$(account): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o account

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f account

re: fclean all