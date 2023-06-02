# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 23:26:37 by nrahali           #+#    #+#              #
#    Updated: 2022/10/31 00:50:41 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Fixed = Fixed
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp Fixed.cpp

OBJ = ${SRC:.cpp=.o}

all : Fixed
	
$(Fixed): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Fixed 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f Fixed

re: fclean all