# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/13 13:48:13 by nrahali           #+#    #+#              #
#    Updated: 2023/05/21 15:16:11 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

btc = btc
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp BitcoinExchange.cpp utils.cpp Empty_file.cpp Errors.cpp Valide_date_value.cpp

OBJ = ${SRC:.cpp=.o}

all : btc
	
$(btc): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o btc 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f btc

re: fclean all