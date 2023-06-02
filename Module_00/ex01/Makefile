# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 23:11:42 by nrahali           #+#    #+#              #
#    Updated: 2022/10/12 17:18:44 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

phonebook = phonebook
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = contact.cpp phone_book.cpp utils.cpp

OBJ = ${SRC:.cpp=.o}

all : phonebook
	
$(phonebook): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o phonebook

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f phonebook

re: fclean all
