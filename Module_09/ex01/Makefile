# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 19:04:41 by nrahali           #+#    #+#              #
#    Updated: 2023/05/16 19:15:20 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RPN =  RPN
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp RPN.cpp 

OBJ = ${SRC:.cpp=.o}

all : RPN
	
$(RPN): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o RPN 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f RPN

re: fclean all