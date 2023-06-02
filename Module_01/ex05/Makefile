# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 21:21:26 by nrahali           #+#    #+#              #
#    Updated: 2022/10/30 23:25:06 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Harl = Harl
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp Harl.cpp

OBJ = ${SRC:.cpp=.o}

all : Harl
	
$(Harl): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o Harl

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f Harl

re: fclean all