# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 21:21:26 by nrahali           #+#    #+#              #
#    Updated: 2022/10/30 22:52:00 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

harlFilter  = harlFilter
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp Harl.cpp

OBJ = ${SRC:.cpp=.o}

all : harlFilter
	
$(harlFilter): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o harlFilter 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f harlFilter

re: fclean all