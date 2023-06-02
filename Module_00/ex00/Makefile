# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 23:05:00 by nrahali           #+#    #+#              #
#    Updated: 2022/10/05 23:38:35 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

magaphone = magaphone
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = megaphone.cpp

OBJ = ${SRC:.cpp=.o}

all : magaphone
	
$(magaphone): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o magaphone

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f magaphone

re: fclean all